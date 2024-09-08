// 16. Print numbers with their squares and cubes
#include<iostream>
using namespace std;
int main(){
    int n,square=0,cube=0;
    cin>>n;
    for (int i = 1; i <=n ; i++)
    {
       square=i*i;
       cube=i*i*i;
    }
    cout<<"Square:"<<square<<endl;
    cout<<"cube:"<<cube<<endl;
    return 0;
}