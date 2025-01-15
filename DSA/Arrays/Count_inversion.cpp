//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
 public:
    // Function to count inversions in the array.
    int merge(vector<int>& arr, int st, int mid, int end) {
        vector<int> temp; 
        // Temporary vector to store the merged sorted subarray

        int i = st, j = mid + 1; 
        // Initialize pointers for left and right subarrays

        int invcount = 0; 
        // Initialize inversion count

        while (i <= mid && j <= end) { 
            // Merge the two sorted subarrays
            if (arr[i] <= arr[j]) {
                temp.push_back(arr[i]);
                i++;
            } else {
                temp.push_back(arr[j]);
                j++;
                invcount += (mid - i + 1); // Count inversions 
                // If arr[i] > arr[j], it means all elements from i to mid are greater than arr[j]
            }
        }

        // Copy remaining elements (if any) from left subarray
        while (i <= mid) {
            temp.push_back(arr[i]);
            i++;
        }

        // Copy remaining elements (if any) from right subarray
        while (j <= end) {
            temp.push_back(arr[j]);
            j++;
        }

        // Copy the merged sorted subarray back to the original array
        for (int i = 0; i < temp.size(); i++) {
            arr[i + st] = temp[i];
        }

        return invcount;
    }

    int mergesort(vector<int>& arr, int st, int end) {
        if (st < end) { 
            // Divide the array into two halves
            int mid = st + (end - st) / 2;

            // Recursively sort the left and right halves
            int leftinvcount = mergesort(arr, st, mid);
            int rightinvcount = mergesort(arr, mid + 1, end);

            // Merge the sorted halves and count inversions
            int invcount = merge(arr, st, mid, end);

            return leftinvcount + rightinvcount + invcount;
        }
        return 0; // Base case: subarray of size 1 is already sorted
    }

    int inversionCount(vector<int> &arr) {
        // Perform merge sort and count inversions
        int invcount = mergesort(arr, 0, arr.size() - 1);
        return invcount;
    }
};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        int n;
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);
        Solution obj;
        cout << obj.inversionCount(a) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends