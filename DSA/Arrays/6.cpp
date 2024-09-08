// max value till i
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    int mx=-19999;
    for (int i = 0; i < n; i++)
    {
       mx=max(mx,arr[i]);
       cout<<mx<<endl;
    }
    return 0;
}