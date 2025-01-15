//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to partition the array around the range such
    // that array is divided into three parts.
    void threeWayPartition(vector<int>& arr, int a, int b) {
        // code here
     int n = arr.size();
        // Using two pointers which help in finding the index with which
        // the elements need to be swapped if they are not in correct position.
        int start = 0, end = n - 1;

        for (int i = 0; i <= end;) {
            // If current element is smaller than lower range, we swap
            // it with value on next available smallest position.
            if (arr[i] < a)
                swap(arr[i++], arr[start++]);

            // If current element is greater than higher range, we swap
            // it with value on next available greatest position.
            else if (arr[i] > b)
                swap(arr[i], arr[end--]);

            // Else we just move ahead in the arr.
            else
                i++;
        }
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string as;
        getline(cin, as);
        int a = stoi(as);
        string bs;
        getline(cin, bs);
        int b = stoi(bs);
        Solution obj;
        obj.threeWayPartition(arr, a, b);
        int ia = 0;
        int ib = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] >= a) {
                ia = i;
                break;
            }
        }
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > b) {
                ib = i;
                break;
            }
        }
        int f = 0;
        for (int i = 0; i < ia; i++) {
            if (arr[i] >= a) {
                f = 1;
                break;
            }
        }

        for (int i = ia; i < ib; i++) {
            if (arr[i] > b || arr[i] < a) {
                f = 1;
                break;
            }
        }

        for (int i = ib; i < arr.size(); i++) {
            if (arr[i] < b) {
                f = 1;
                break;
            }
        }

        if (f) {
            cout << "false" << endl;
        } else {
            cout << "true" << endl;
        }
        // cout << res << endl;
        cout << "~" << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends