//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        // code here
    // Sort the array
    sort(arr.begin(), arr.end());
int n=arr.size();
    // Initial difference between max and min heights
    int initialDiff = arr[n - 1] - arr[0];

    // Initialize the minimum difference
    int minDiff = initialDiff;

    // Iterate through the array to calculate the min and max heights after modification
    for (int i = 1; i < n; i++) {
        // Skip if the current height minus K is negative
        if (arr[i] < k) continue;

        // Calculate the new max height and min height
        int maxHeight = max(arr[i - 1] + k, arr[n - 1] - k);
        int minHeight = min(arr[0] + k, arr[i] - k);

        // Update the minimum difference
        minDiff = min(minDiff, maxHeight - minHeight);
    }

    return minDiff;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, k;
        cin >> k;
        cin.ignore();
        vector<int> a, b, c, d;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution ob;
        auto ans = ob.getMinDiff(a, k);
        cout << ans << "\n";
        cout << '~' << endl;
    }
    return 0;
}
// } Driver Code Ends