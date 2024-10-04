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
void insertAtEnd(node* &head,int value){
  node* newNode=new node(value);
if (head==NULL)
{
 head=newNode;
 return;
}
node* temp=head;
while (temp->next!=NULL)
{
  temp=temp->next;
  /* code */
}
temp->next=newNode;
}
void display(node* head){
  node* temp=head;
  while (temp!=NULL)
  {
    cout<<temp->data<<"->";
    temp=temp->next;
  }
  cout<<"NULL"<<endl;
}
int main(){
  node* head=NULL;
  insertAtEnd(head,1);
  insertAtEnd(head,6);
  insertAtEnd(head,1);
  insertAtEnd(head,10);
  display(head);
    return 0;
}