// Search an element in an array
#include<iostream>
using namespace std;

// Function to search an element in an array
int linearSearch(int arr[],int n,int element){
    for (int i = 0; i < n; i++)
    {
     if (arr[i]==element)
     {
        return i;
     }
     
    }
    return -1;
}
int main(){
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
   cin>>arr[i];
}
int element;
cin>>element;
cout<<linearSearch(arr,n,element)<<endl;
return 0;
}