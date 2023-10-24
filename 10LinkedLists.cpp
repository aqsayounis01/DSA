#include<iostream>
using namespace std;

class node 
{
    public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void insertAtTail(node* &head , int val)   //we have to modify the LL so take head as refrence 
{
    node* n= new node(val);   // requests a new block of memory
    
    if (head == NULL)   // if LL is empty 
    {
        head=n;         // first node will be the block of memory we requested 
    }

    node* temp= head ;        // temp pointer will traverse the LL and go to lat   
    while (temp->next!=NULL)    // to reach the last node
    {
        temp=temp->next;
    }

    temp->next=n;          // last node will not point to the new node 
    n->next=NULL;
}
void display(node *head)
{
    
    node* temp=head ;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

}

void insertAtHead(node* &head,int val)
{
    node* n =new node(val);
    n->next=head;    //head will become the second node 
    head = n;         // n will become the head 
}
node* search(node* head, int k)
{
    int ind=0;
    node* temp=head;
    while (temp!=NULL)      // search till the last (including the last node)
    {
        if(temp->data==k)
        {
            cout<<ind<<endl;
            return temp;   // node will not be contiguous 
        }
        temp=temp->next;
        ind++;
    }

    cout<<"element not found";
}
int main()
{
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtHead(head,4);
    display(head);
    cout<<search(head,1);

}