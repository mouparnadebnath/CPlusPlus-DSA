#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> discount(vector<int> &arr, int n)
{
  stack<int> s;
  s.push(0);
  vector<int> ans(n);
  for (int i = n - 1; i >= 0; i--)
  {
    int curr = arr[i];
    while (s.top() >= curr)
    {
      s.pop();
    }
    ans[i] =arr[i]- s.top();
    s.push(curr);
  }
  return ans;
}
int main()
{
  int n;
  cin >> n;
  vector<int> arr;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    arr.push_back(x);
  }
  vector<int> val = discount(arr, n);
  for (int ele : val)
  {
    cout << ele << " ";
  }
  cout << endl;
  return 0;
}