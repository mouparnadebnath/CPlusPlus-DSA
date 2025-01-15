//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
       int mx=INT_MIN;
       int sum=0;
       for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        mx=max(mx,sum);
        if(sum<0) sum=0;  // reset sum if current sum becomes negative  // resetting sum to 0 if sum becomes negative to avoid negative subarray sum.  // this is done because max subarray sum cannot end at a negative number.  // this is the key difference between Kadane's algorithm and this algorithm.  // Kadane's algorithm considers all subarrays and keeps track of the maximum sum found so far.  // this algorithm
       }
       return mx;  // return the maximum sum found so far.  // this is the maximum sum of contiguous subarray.  // Kadane's algorithm keeps track of the maximum sum found so far.  // this algorithm returns the maximum sum of contiguous subarray found in the given array.  // this is the key difference between Kadane's algorithm and this algorithm.  // Kadane's algorithm considers all subarrays and keeps track of the maximum sum found so far
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--)   // while testcases exist
    {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.maxSubarraySum(arr) << endl;
    }
}
// } Driver Code Ends