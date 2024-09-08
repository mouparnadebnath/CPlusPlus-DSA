// reverse an number
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int reverse=0;
    while (n>0)
    {
        int lastdigit=n%10;
        int reversedNum=reverse*10+lastdigit;
n=n/10;
cout<<reversedNum;
    }
 return 0;   
}