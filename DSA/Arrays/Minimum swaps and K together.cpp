//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Final function implementation
class Solution {
  public:
    int minSwap(vector<int>& arr, int k) {
        // code here
        int minswap=0;
        int count=0;
        int n=arr.size();
           // Count elements <= k
        for(int i=0;i<n;i++){
            if(arr[i]<=k)count++;
        }
        // Find the count of bad elements in the first window
      int bad=0;
      for(int i=0;i<count;i++){
          if(arr[i]>k){
              bad++;
          }
      }
       // Initialize result with bad count of the first window
       int ans=bad;
        // Slide the window
        for(int i=0,j=count;j<n;i++,j++){
             // Exclude the outgoing element
             if(arr[i]>k){
                 bad--;
             }
               // Include the incoming element
               if(arr[j]>k){
                   bad++;
               }
            // Update the minimum bad count
            ans=min(ans,bad);
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.minSwap(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends