//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
        //User function Template for C++
        
        int maxProfit(vector<int>&price){
            //Write your code here..
           int n = price.size();
    if (n <= 1) {
        return 0; // No profit possible with 1 or 0 prices
    }

    // Calculate maximum profit from 1st transaction 
    int firstBuy = INT_MIN; // Initialize to minimum possible value
    int firstSell = 0;
    int secondBuy = INT_MIN; 
    int secondSell = 0;
    for (int i = 0; i < n; i++) {
        firstBuy = max(firstBuy, -price[i]); // Track minimum buying price
        firstSell = max(firstSell, firstBuy + price[i]); // Track maximum profit from 1st transaction
        secondBuy = max(secondBuy, firstSell - price[i]); // Track minimum buying price after 1st transaction
        secondSell = max(secondSell, secondBuy + price[i]); // Track maximum profit from 2nd transaction
    }

   
    return secondSell;
        }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        Solution obj;
        cout<<obj.maxProfit(price)<<endl;
    
cout << "~" << "\n";
}

}

// } Driver Code Ends