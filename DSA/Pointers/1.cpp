// declare pointers
#include<iostream>
using namespace std;

void swap(int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
   int a=658;
   int *aptr=&a;
   cout<<"Value of a using pointer: "<<*aptr<<endl;
   cout<<"Address of a using pointer: "<<aptr<<endl;

   // change value using pointer
   *aptr=98998;
   cout<<"Changed value of a using pointer: "<<*aptr<<endl;
   cout<<"Address of a using pointer: "<<aptr<<endl;
// array pointer
int arr[]={7,8,9,10,11,12,13,14,15};
int *arrptr=arr;
cout<<*arr<<endl;
cout<<"Address of array pointer: "<<arrptr<<endl;
for (int i = 0; i < 9; i++)
{
    cout<<*(arr+i)<<" ";
    /* code */
}

// pointer to pointer
int b=10;
int *bptr=&b;
// double pointer
int **bptrptr=&bptr;

cout<<b<<endl;
cout<<"Address of b: "<<bptr<<endl;
cout<<"Value of bptr: "<<*bptrptr<<endl;
cout<<"Address of bptrptr: "<<bptrptr<<endl;
cout<<**bptrptr<<endl;
**bptrptr=30;
cout<<**bptrptr<<endl;

// swap values
int x=5,y=10;
int *xptr=&x,*yptr=&y;

cout<<"Before swap: x="<<x<<" y="<<y<<endl;
// 1st method;
// swap(xptr,yptr);
// 2nd method
swap(&x,&y);
cout<<"After swap: x="<<x<<" y="<<y<<endl;

   return 0;
}