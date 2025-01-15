//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        sort(a.begin(),a.end()); 
// Sort the input vector 'a' in ascending order. 

int n=a.size(); 
// Get the size of the input vector.

int mindif=INT_MAX; 
// Initialize 'mindif' with the maximum possible integer value (INT_MAX) 
// to store the minimum difference found so far.

for(int i=0;i<=n-m;i++){ 
    // Iterate through the vector with the following condition:
    // - 'i' starts from 0 and goes up to 'n-m' (inclusive). 
    //   This ensures that we always have a subarray of size 'm' within the vector.

    mindif=min(mindif,a[i+m-1]-a[i]); 
    // Calculate the difference between the last element ('a[i+m-1]') 
    // and the first element ('a[i]') of the current subarray of size 'm'.
    // Update 'mindif' with the minimum value between the current 'mindif' 
    // and the calculated difference. 
}

return mindif; 
// After the loop, 'mindif' will hold the minimum difference 
// between the maximum and minimum elements of any subarray of size 'm'.
// Return the 'mindif' as the result.
        
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
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        int m;
        cin >> m;
        cin.ignore();
        Solution ob;
        cout << ob.findMinDiff(arr, m) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends