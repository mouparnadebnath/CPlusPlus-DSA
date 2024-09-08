#include <iostream>
#include <vector>

using namespace std;

void recordbreaker(){
 int n;
 cin>>n;
 int a[n];
 for (int i = 0; i < n; i++)
 {
   cin>>a[i];
 }
 a[n]=-1;
 if (n==1)
 {
   cout<<"1"<<endl;
   return;
 }
 
    int ans=0;
    int mx=-1;
  for (int i = 0; i < n; i++)
  {
    if (a[i]>mx && a[i]>a[i+1])
       ans++;
       mx=max(mx,a[i]); /* code */
  }
  
    cout<<ans<<" ";
}
int main() {
  recordbreaker();
    return 0;
}