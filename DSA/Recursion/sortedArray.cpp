#include<iostream>
using namespace std;
bool isSorted(int arr[],int n){
    if (n==1)
    {return true;
        /* code */
    }
    
bool restArr=isSorted(arr+1,n-1);
return (arr[0]<arr[1]&&restArr);
}
int main(){
int arr[]={1,2,3,4,5,6,9,8,9,10};
cout<<isSorted(arr,10);
}