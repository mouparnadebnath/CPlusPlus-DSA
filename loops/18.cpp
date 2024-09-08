// 20. Print numbers with their multiples
#include<iostream>
using namespace std;

int main(){
    int n,num;
    cin>>n>>num;
    for (int i = 1; i <= num; i++)
    {
        cout<<n<<"x"<<i<<"="<<n*i;
        cout<<endl;
    }
    return 0;
}