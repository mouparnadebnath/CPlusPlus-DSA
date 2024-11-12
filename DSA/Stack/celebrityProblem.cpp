#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int celebrity(vector<vector<int>>& M,int n){
stack<int>s;
for (int i = 0; i < n; i++)
{
  s.push(i);
}
while (s.size()!=1)
{
   int a=s.top();
   s.pop();
   int b=s.top();
   s.pop();
   if (M[a][b] == 1) { // a knows b, remove a from stack
       s.push(b);
   } else { // b knows a, remove b from stack
       s.push(a);
   }
   
}
int ans=s.top();
// veruify that it is the celebrity
int zeroCount=0;
for (int i = 0; i < n; i++)
{
   if (M[ans][i]==0)
   {
   zeroCount++;
   }
   
}
if (zeroCount!=n)
{
  return -1;
}
int oneCount=0;
for (int i = 0; i < n; i++)
{
    if(M[i][ans]==1){
        oneCount++;
    }
}
if (oneCount!=n-1)
{
  return -1;
}


return ans;
}

int main(){
int n;
cout<<"Enter num of Rows and Cols : ";
cin>>n;

vector<vector<int>> M(n,vector<int>(n,0));
for (int i = 0; i < n; i++)
{
for (int j = 0; j < n; j++)
{
    cout<<"Enter element at ("<<i<<","<<j<<") : ";
    cin>>M[i][j];
}

}
   cout << "\nThe entered 2D vector is:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
// call the celebrity function
cout<<celebrity(M,n);
return 0;
}