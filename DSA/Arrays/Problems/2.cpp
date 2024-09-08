// Find maximum in an Array
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
    int mx=-199999;
    for (int i = 0; i < n; i++)
    {
  if (arr[i]>mx)
  {
    int temp;
    temp=arr[i];
    arr[i]=mx;
    mx=temp;
    /* code */
  }
  
    }
    cout<<mx<<endl;
    return 0;
}