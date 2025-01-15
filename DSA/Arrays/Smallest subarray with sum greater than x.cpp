//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    int smallestSubWithSum(int x, vector<int>& arr) {
        // Your code goes here
        int minlen=INT_MAX;
      int start=0,end=0,currsum=0;
        int n=arr.size();
        while(end<n){
            // Expand the window: While the curr_sum is less than or equal to x,
            // keep expanding the window by incrementing the end index and adding 
            // the corresponding element to curr_sum
            while(currsum<=x && end<n){
                currsum+=arr[end++];
            }
            // Shrink the window: While the curr_sum is greater than x,
            // update min_len with the current window size,
            // and shrink the window by incrementing the start index and 
            // subtracting the corresponding element from curr_sum.
            while(currsum>x && start<n){
                minlen=min(minlen,end-start);
                currsum-=arr[start++];
            }
        }
        if(minlen==INT_MAX){
            return 0;
        }
        return minlen;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t

    while (t--) {
        vector<int> arr;
        int x;

        cin >> x;
        cin.ignore(); // Ignore the newline character after x

        string input;
        getline(cin, input); // Read the entire line for the array elements

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        cout << obj.smallestSubWithSum(x, arr) << "\n~\n";
    }

    return 0;
}
// } Driver Code Ends