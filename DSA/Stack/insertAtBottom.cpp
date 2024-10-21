#include<iostream>
#include<stack>
using namespace std;

void insertAtbottom(stack<int>& s,int num){
    if(!s.empty()){
        int temp=s.top();
        s.pop();
        insertAtbottom(s,num);
        s.push(temp);
    }else{
        s.push(num);
        return;
    }

}
int main(){
    stack<int> s;
    s.push(19);
    s.push(13);
    s.push(15);
    s.push(18);
    insertAtbottom(s,20);
    cout<<s.top()<<" ";
    s.pop();
   cout<<s.top()<<" ";
    s.pop();
   cout<<s.top()<<" ";
    s.pop();
   cout<<s.top()<<" ";
    s.pop();
   cout<<s.top()<<" ";
    
    return 0;
}
