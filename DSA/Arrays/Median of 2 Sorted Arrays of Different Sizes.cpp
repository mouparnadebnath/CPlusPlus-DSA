//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        // Your code goes here
        int n=a.size(),m=b.size();
        vector<int>temp;
        int j=0;
        int k=0;
        while(j<n && k<m){
        if(a[j]>b[k]){
             temp.push_back(b[k]);
             k++;
        }else{
            temp.push_back(a[j]);
            j++;
        }
        }
        // Handle remaining elements in array 'a'
while (j < n) {
    temp.push_back(a[j]);
    j++;
}

// Handle remaining elements in array 'b'
while (k < m) {
    temp.push_back(b[k]);
    k++;
}
         int t=temp.size();
        double ans=0;
        if(t%2!=0){
            ans=temp[t/2];
        }else{
        ans=(temp[t/2]+temp[t/2-1])/2.0;
           
        }
        
    return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline after reading `t`

    while (t--) {
        // Read the first array
        string line1;
        getline(cin, line1);
        stringstream ss1(line1);

        vector<int> array1;
        int num;
        while (ss1 >> num) {
            array1.push_back(num);
        }

        // Read the second array
        string line2;
        getline(cin, line2);
        stringstream ss2(line2);

        vector<int> array2;
        while (ss2 >> num) {
            array2.push_back(num);
        }

        // Create a Solution object and calculate the median
        Solution ob;
        if (array2.size() == 1 && array2[0] == 0) {
            array2.pop_back();
        }

        double ans = ob.medianOf2(array1, array2);
        if (ans == (int)ans) {
            cout << (int)ans << endl;
        } else {
            cout << ans << endl;
        }

        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends