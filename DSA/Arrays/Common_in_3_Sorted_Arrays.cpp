//{ Driver Code Starts
// here

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
        // Code Here
        unordered_set<int> temp;
        int i1=arr1.size()-1;
        int i2=arr2.size()-1;
       int i3=arr3.size()-1;
while(i1>=0 && i2>=0 &&i3>=0 ){
    if(arr1[i1]==arr2[i2] && arr2[i2]==arr3[i3]){
        temp.insert(arr1[i1]);
        i1--;
        i2--;
        i3--;
    }
    else if(arr1[i1]<arr2[i2]){
        i2--;
    }else if(arr2[i2]<arr3[i3]){
        i3--;
    }
    else{
        i1--;
    }
}

vector<int> res(temp.begin(),temp.end());
sort(res.begin(),res.end());
return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, brr, crr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            brr.push_back(number2);
        }
        string input3;
        getline(cin, input3);
        stringstream ss3(input3);
        int number3;
        while (ss3 >> number3) {
            crr.push_back(number3);
        }
        Solution ob;
        vector<int> res = ob.commonElements(arr, brr, crr);
        if (res.size() == 0)
            cout << -1;
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl << "~\n";
    }
}
// } Driver Code Ends