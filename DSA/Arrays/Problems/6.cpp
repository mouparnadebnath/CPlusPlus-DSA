// Running Comparison Alice and Bob recently got into running, and decided to compare how much they ran on different days.They each ran for N days — on the i th day, Alice ran  A[i[​   meters and Bob ran   B[i] ​   meters. On each day, Alice is unhappy if Bob ran strictly more than twice her distance, and happy otherwise. Similarly, Bob is unhappy if Alice ran strictly more than twice his distance, and happy otherwise.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int sum=0;
        for (int i = 0; i < n; i++)
        {
         if (a[i]<=b[i]*2 && b[i]<=a[i]*2)
         {
           sum++;
         }
         
        }
        cout << sum << endl;
        // your code goes here
    }
    return 0;
}