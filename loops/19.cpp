// 1. Print numbers from 1 to 100 in a 10x10 matrix
#include <iostream>

using namespace std;

int main() {
    int count=1;
    for (int row = 1; row <= 10; row++)
    {
       for (int col = 1; col <= 10; col++)
       {
        cout<<count<<"\t";
        count++;
       }
       cout<<endl;
    }
    
    return 0;
}