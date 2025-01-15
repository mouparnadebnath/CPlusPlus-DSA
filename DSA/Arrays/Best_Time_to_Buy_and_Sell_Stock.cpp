class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp = 0; // Initialize 'mp' (maximum profit) to 0
        int bestbuy = prices[0]; // Initialize 'bestbuy' with the price of the first day

        for (int i = 1; i < prices.size(); i++) {
            // Iterate through the prices array starting from the second day

            if (prices[i] > bestbuy) { 
                // If the current price is greater than the best buy price found so far:
                mp = max(mp, (prices[i] - bestbuy)); 
                // Update 'mp' with the maximum of the current 'mp' and the current profit
            }

            bestbuy = min(bestbuy, prices[i]); 
            // Update 'bestbuy' with the minimum price encountered so far
        }

        return mp; 
        // Return the maximum profit calculated
    }
};