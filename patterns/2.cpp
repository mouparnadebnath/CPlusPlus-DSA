// Print a hollow rectangle
#include<iostream>
using namespace std;
int main(){
    int rows,columns;
    cin>>rows>>columns;
    for (int i = 1; i <= rows; i++)
    {
        /* code */
        for (int j = 1; j <= columns; j++)
        {
            /* code */
            if (i==1||i==rows||j==1||j==columns)
            {
                cout<<"*";
                /* code */
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        
    }
    return 0;
}