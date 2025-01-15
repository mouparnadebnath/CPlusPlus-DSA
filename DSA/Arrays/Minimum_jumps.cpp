//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution {
  public:
    int minJumps(vector<int>& arr) {
     int n=arr.size(); 
// Get the size of the input array (number of elements)

int mx=0, maxrange=0, jumps=0; 
// Initialize variables:
// - 'mx': Stores the maximum reachable index from the current position.
// - 'maxrange': Stores the farthest index reachable so far.
// - 'jumps': Counts the number of jumps made.

for(int i=0;i<n;i++){
    mx=max(mx,i+arr[i]); 
    // Update 'mx' with the maximum reachable index from the current position 'i'.
    // This is calculated as the sum of the current index 'i' and the value of the element at that index 'arr[i]'.

    if(i==maxrange){ 
        // If the current index 'i' has reached the farthest index reachable so far ('maxrange'):
        // - Update 'maxrange' to the new maximum reachable index ('mx').
        // - Increment the 'jumps' counter.
        maxrange=mx; 
        jumps++; 
    }

    if(maxrange>=n){ 
        // If the farthest reachable index ('maxrange') is greater than or equal to the last index of the array (n-1):
        // - The end of the array can be reached.
        // - Return the number of jumps required ('jumps').
        return jumps; 
    }
}

return -1; 
// If the loop completes without reaching the end of the array:
// - The array cannot be reached with the given jumps.
// - Return -1 to indicate that it's not possible to reach the end.
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, i, j;
        vector<int> arr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.minJumps(arr) << endl << "~\n";
    }
    return 0;
}

// } Driver Code Ends