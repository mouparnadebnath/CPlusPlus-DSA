//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &mat) {
        // code here
        vector<int>ans;
         int m=mat.size();
         int n=mat[0].size();
         int srow=0,scol=0,erow=m-1,ecol=n-1;
         while(srow<=erow && scol<=ecol){
            //  top
             for(int i=scol;i<=ecol;i++){
              ans.push_back(mat[srow][i]);   
             }
            //  right
            for(int i=srow+1;i<=erow;i++){
                ans.push_back(mat[i][ecol]);
            }
            // bottom
            for(int i=ecol-1;i>=scol;i--){
                if(srow==erow){
                    break;
                }
                ans.push_back(mat[erow][i]);
            }
            // left
            for(int i=erow-1;i>=srow+1;i--){
                if(scol==ecol){
                    break;
                }
                ans.push_back(mat[i][scol]);
            }
            srow++;
            scol++;
            erow--;
            ecol--;
         }
         return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r);

        for (int i = 0; i < r; i++) {
            matrix[i].assign(c, 0);
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends