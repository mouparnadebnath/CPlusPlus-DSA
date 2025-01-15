//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
      int n = arr.size(); 
    if (n == 0) { 
        return 0; // No blocks, no water
    }

    // 1. Find Maximum Height to the Left of Each Block
    vector<int> left_max(n); 
    left_max[0] = arr[0]; // First block's left max is itself
    for (int i = 1; i < n; i++) {
        left_max[i] = max(left_max[i - 1], arr[i]); // Keep track of the highest block seen so far
    }

    // 2. Find Maximum Height to the Right of Each Block
    vector<int> right_max(n);
    right_max[n - 1] = arr[n - 1]; // Last block's right max is itself
    for (int i = n - 2; i >= 0; i--) {
        right_max[i] = max(right_max[i + 1], arr[i]); // Keep track of the highest block seen so far
    }

    // 3. Calculate Water Trapped at Each Block
    int water_trapped = 0;
    for (int i = 0; i < n; i++) {
        // Find the minimum height of the "walls" (left and right max)
        int min_wall_height = min(left_max[i], right_max[i]); 
        // Calculate water trapped at this block
        water_trapped += min_wall_height - arr[i]; 
    }

    return water_trapped; // Total water trapped
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends