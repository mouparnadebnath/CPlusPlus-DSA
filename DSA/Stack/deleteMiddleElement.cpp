#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&input,int count,int size){
    if(count==size/2){
        input.pop();
        return;
    }
    int ele=input.top();
    input.pop();
    // recursion
    solve(input,count+1,size);
    input.push(ele);
}
void deleteMiddle(stack<int>&inputStack, int N){
	
  	int count = 0;
    solve(inputStack, count, N);
   
}
int main(){
    int n;
    cin>>n;
    int input[n];
    for (int i = 0; i < n; i++)
    {
      cin>>input[i];
    }
    stack<int> s;
    for (int i = 0; i < n; ++i)
    {
       s.push(input[i]);
    }
    deleteMiddle(s,n);

return 0;
}