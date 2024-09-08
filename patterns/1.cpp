// The easiest way to understand the working of a nested loop is by solving pattern printing problems.
// Print a solid rectangle
#include<iostream>
using namespace std;
int main(){
    int row,column;
    cin>>row>>column;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            cout<<"*";
            /* code */
        }
        
        /* code */
        cout<<endl;
    }
    return 0;
}
