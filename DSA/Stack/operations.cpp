// implementation of stack 
#include<iostream>
using namespace std;

#define a 100
class Stack{
    int* arr;
    int top;
    public:
Stack(){
    arr=new int [a];
    top=-1;
}
void push(int x){
    if (top==a-1)
    {
        cout<<"Stack Overflow"<<endl;
        return;
    }
top++;
arr[top]=x;
}
void pop(){
    if (top==-1)
    {
       cout<<"no elements in the stack to pop"<<endl;
       return;
    }
    top--;
}
bool empty(){
    return top==-1;
}
void Top(){
    if (top==-1)
    {
       cout<<"stack is empty"<<endl;
       return;
    }
    cout<<"Top element is: "<<arr[top]<<endl;
}
};
int main(){
Stack s;
s.push(29);
s.push(24);
s.push(23);
s.push(204);
s.push(223);
s.push(24);
s.Top();
s.pop();
s.pop();
s.pop();
s.pop();
s.pop();
s.pop();
s.pop();
s.Top();
cout<<s.empty()<<endl;
return 0;
}