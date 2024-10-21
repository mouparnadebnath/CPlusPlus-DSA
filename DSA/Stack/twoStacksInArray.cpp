// implement two stacks in an array
#include<iostream>
// #include<stack>
using namespace std;
#define s 100
class Stack{
    int *arr;
    int size;
    int top1;
    int top2;
    public:
Stack(){
this->size=s;
top1=-1;
top2=s;
arr=new int[s];
}
void push1(int num){
if (top2-top1>1)
{
  top1++;
arr[top1]=num;

}
}
void push2(int num){
if (top2-top1>1)
{
  top2--;
arr[top2]=num;

}
}
void pop1(){
    if (top1>-1)
    {
      top1--;
    }
    
}
void pop2(){
    if (top2<size)
    {
      top2++;
    }
    
}
void top(){
    cout<<"Top1:"<<arr[top1]<<endl;
    cout<<"Top2:"<<arr[top2]<<endl;
}
};
int main(){
   
Stack so;
so.push1(3);
so.push1(5);
so.push2(6);
so.push2(7);
so.push2(9);
so.top();
so.pop1();
so.pop2();
so.top();
return 0;
}