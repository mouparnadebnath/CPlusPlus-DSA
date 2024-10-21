#include<iostream>
#include<stack>
using namespace std;

void insert(stack<int>& s,int num){
    if(s.empty()||s.top()<num){
        s.push(num);
        return;
    }
    int temp=s.top();
    s.pop();
    insert(s,num);
    s.push(temp);
}
void sortstack(stack<int>& s){
    if (s.empty())
    {
      return;
    }
    int num=s.top();
    s.pop();
   
    sortstack(s);
    insert(s,num);
    
    
}
int main(){
    stack<int> s;
    s.push(11);
    s.push(-2);
    s.push(12);
    s.push(-4);
    s.push(10);
    sortstack(s);
    while (!s.empty())
    {
      cout<<s.top()<<" ";
      s.pop();
    }
    
    return 0;
}