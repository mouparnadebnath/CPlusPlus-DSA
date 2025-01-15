//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
           vector<int> pa,na;
        for(auto val:arr){
            if(val<0){
                na.push_back(val);
            }else{
                pa.push_back(val);
            }
        }
        int i=0,j=0,k=0;
        while(i<pa.size() && j<na.size()){
            arr[k]=pa[i];
    k++,i++;
            arr[k]=na[j];
          k++,j++;
        }
          while(i<pa.size() ){
            arr[k]=pa[i];
    k++,i++;
        }
          while( j<na.size()){
            arr[k]=na[j];
          k++,j++;
        }
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
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends