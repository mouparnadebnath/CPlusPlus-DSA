//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            // use two pointers;
        int left=i+1;
        int right=n-1;
        while(left<right){
        int sum=arr[i]+arr[left]+arr[right];
        // as the array is sorted if sum is less than target , we should increase
        // left to add more value in the sum. If the summ greater than target then
        // decrease the right .
          if(sum<target){
          left++;
          }else if(sum>target){
              right--;
          }else{
              return true;
          }
            
            
        }
        }
    return false;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int target;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> target;
        cin.ignore(); // Ignore newline character after target input

        Solution solution;
        bool result = solution.hasTripletSum(arr, target);
        cout << (result ? "true" : "false") << "\n";
    }

    return 0;
}
// } Driver Code Ends