#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    int ans=0;
    for (int i = 1; i <= n; i++)
    {
ans+=i;
    }
   return ans; 
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);
}