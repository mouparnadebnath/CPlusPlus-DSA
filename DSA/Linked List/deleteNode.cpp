#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int value){
data=value;
next=NULL;
    }
};
void insert(node* &head ,int value){
    node* newnode=new node(value);
    if (head==NULL)
    {
        head=newnode;
        return;
        /* code */
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;

    }
    temp->next=newnode;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
 
}
void deleteAtHead(node* &head){
    node* todelete=head;
    head=head->next;
    delete todelete;
}
void deletion(node* &head ,int value){
node* temp=head;
if (head==NULL)
{
    return;
    /* code */
}
if (head->next==NULL)
{
  deleteAtHead(head);
  return;
}

while (temp->next->data!=value)
{
   temp=temp->next;
}
node* toDelete=temp->next;
temp->next=temp->next->next;
delete toDelete;
}
int main(){
node* head=NULL;
insert(head,3);
insert(head,37);
insert(head,39);
    display(head);
    deleteAtHead(head);
    display(head);
    deletion(head,39);
    display(head);
    deletion(head,37);
    display(head);
    return 0;
}