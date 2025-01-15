//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
     unordered_set<int> s;
     int ans=0;
    //  insert the elements into the set
     for(int i=0;i<arr.size();i++){
         s.insert(arr[i]);
     }
     for(int i=0;i<arr.size();i++){
        // if arr[i]-1 not found in the set the this might
        // be the starting point of the sequence 
         if(s.find(arr[i]-1)==s.end()){
            //  if arr[i] is the starting element
             int j=arr[i];
            //  while j is found in the set
         while(s.find(j)!=s.end()){
             j++;
         }
         ans=max(ans,j-arr[i]);
         }
             
         }
         return ans;
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
        int res = ob.longestConsecutive(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends