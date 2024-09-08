// 15. Calculate sum of cubes of numbers from 1 to n
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
for (int i = 1; i <=n; i++)
{
  sum+=i*i*i;
}
cout<<sum;
return 0;
}