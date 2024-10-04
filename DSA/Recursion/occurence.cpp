// find the first and last occurence of a number in the array
#include<iostream>
using namespace std;

int first_occurence(int arr[],int n,int i,int key){
    if (i==n)
    {
        return -1;
    }

if (arr[i]==key)
{
   return i;
}
return first_occurence(arr,n,i+1,key);

}
int last_occurence(int arr[],int n,int i,int key){
     if (i==n)
    {
        return -1;
    }
    int restArray=last_occurence(arr,n,i+1,key);
    if (restArray!=-1)
    {
        return restArray;
        /* code */
    }
    
   

if (arr[i]==key)
{
   return i;
}
return -1;

}
int main(){
int arr[]={3,4,5,6,3,6,7,4,4};
cout<<first_occurence(arr,9,0,4)<<endl;
cout<<last_occurence(arr,9,0,4);
return 0;
}