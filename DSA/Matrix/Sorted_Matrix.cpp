//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int n, vector<vector<int>> mat) {
        // code here
      vector<int>ans;
      for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
 // 1d array to store all the matrix elements 
              ans.push_back(mat[i][j]);
          }
      }
    //   sort the array
      sort(ans.begin(),ans.end());
    //  overwrite in the matrix 
      int index=0;
       for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
              mat[i][j]=ans[index++];
          }
      }
      return mat;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> v(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> v[i][j];
        Solution ob;
        v = ob.sortedMatrix(N, v);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) cout << v[i][j] << " ";
            cout << "\n";
        }
    
cout << "~" << "\n";
}
}
// } Driver Code Ends