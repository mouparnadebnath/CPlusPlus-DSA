// Take discount or Not
// #include <bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        // your code goes here
        int after=x,before=0;
        for(int i=0;i<n;i++){
            before+=a[i];
            // after discount if there is a negetive emlement found then it should not be counted ,so max(0,a[i]-y) is written here.
           int m=a[i]-y;
         int mx=max(0,m);
            after+=mx;
        }
            if(before>after){
                cout<<"COUPON"<<endl;
            }
            else{
                cout<<"NO COUPON"<<endl;
                
            }
    }

}
