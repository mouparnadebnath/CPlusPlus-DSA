#include<iostream>
#include<stack>
using namespace std;

void insertAtbottom(stack<int>& s,int num){
if (s.empty())
{
s.push(num);
return;
}
 int temp=s.top();
 s.pop();
 insertAtbottom(s,temp);
 s.push(temp);
 
}
void reverse(stack<int>& s){
if (s.empty())
{return;
    /* code */
}
int num=s.top();
s.pop();
reverse(s);
insertAtbottom(s,num);
}
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    reverse(s);
    cout<<s.top();
    return 0;
}