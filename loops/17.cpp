// 19. Print numbers with their divisors
#include<iostream>
using namespace std;

int main(){
    int n,i;
    cin>>n;
    for ( i = 1; i <= n; i++)
    {
      if (n%i!=0)
      {
       continue;
      }
      
      cout<<i<<" ";
    }
    return 0;
}