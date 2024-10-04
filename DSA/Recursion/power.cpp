#include <iostream>
#include <cmath>
using namespace std;

int givePower(int n,int p){
    if (p==0)
    {
       return 1;
    }
    int previousPower=pow(n,p-1);
    return n*previousPower;
}
int main(){
    int n,p;
    cin>>n>>p;
    cout<<givePower(n,p);
    return 0;
 
}