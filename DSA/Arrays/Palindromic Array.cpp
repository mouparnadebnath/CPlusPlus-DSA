//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
  public:
  bool palin(int num){
      string str=to_string(num);
      int left=0;
      int right=str.length()-1;
      while(left<right){
          if(str[left]!=str[right]){
              return false;
          }
              left++;
              right--;
          
      }
          return true;
  }
    bool isPalinArray(vector<int> &arr) {
        // code here
   for(auto num:arr){
       if(!palin(num)){
           return false;
       }
   }
   return true;
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
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;

        cout << (ob.isPalinArray(arr) ? "true" : "false") << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends