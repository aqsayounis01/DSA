#include<iostream>
using namespace std;
//create , insert , delete , traverse 
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
void insert(node* &head)
{
    for (int  i = 0; i < 5; i++)
    {
        node* n= new node(i);
        if (head==NULL)
        {
            head=n;
            head->next=NULL;
        }
        node* temp = head ;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=n;
        n->next=NULL;
    
    }
    
    
}
void display(node * head)
{
    node* temp= head ;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    
}
void dele(node* &head)
{
    int n;
    cout<<"\nenter the element you want to delete:";
    cin>>n;
    node *temp=head ;
    node * nod;
    if (n==temp->data)
    {
        head = temp->next;
        nod = temp;


    }
    else
    {
        while (temp->next->data!=n)    // temp is 1 before data
    {
        temp=temp->next;
        
    }
    nod = temp->next;   // nod stores the node that is to be deletes 
    temp->next=nod->next;     // now temp will point to the node after the nod
    }
    
    
    delete nod;
//   temp  1 2 3 4
    // 0
}
int main()
{
    cout<<"hi"<<endl;
    node* head = NULL;
    insert(head);
    display(head);
    dele(head);
    display(head);


}