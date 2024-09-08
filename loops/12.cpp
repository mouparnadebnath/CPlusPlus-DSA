// 14. Calculate sum of squares of numbers from 1 to n
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    for (int i = 1; i <= n; i++)
    {int square=i*i;
       sum+=square;
    }
       cout<<sum;
    return 0;
}
