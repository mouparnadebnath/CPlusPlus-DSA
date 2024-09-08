#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool isprime=0;
    for (int i = 2; i < n; i++)
    {
      if (n%i==0)
      {
        cout<<"is not prime";
        isprime=1;
        break;
        /* code */
      }
   
        /* code */
    }
   if (isprime==0)
   {
    cout<<"is prime";
    /* code */
   }
    return 0;
}