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
void insertAtHead(node* &head ,int value){
    node* newNode=new node(value);
    newNode->next=head;
    head=newNode;
}
void display(node* head){
node* temp=head;
while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
}
cout<<"NULL";
}
int main(){
node* head=NULL;
insertAtHead(head,4);
insertAtHead(head,40);
insertAtHead(head,400);
insertAtHead(head,4000);
display(head);
    return 0;
}