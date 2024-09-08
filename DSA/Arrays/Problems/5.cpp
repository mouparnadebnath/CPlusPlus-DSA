// MIN To MAX
// You are given an array A of size N,Let M be the minimum value present in the array initially.Determine the minimum number of operations required to make M the maximum value in the array A

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // your code goes here
        int m =INT_MAX;
            int sum = 0;
        for (int i = 0; i < n; i++)
        {
           m=min(m,a[i]);
            if (a[i] == m)
            {
                sum++;
            }
        }
        cout << n-sum <<endl;
    }
    return 0;
}
