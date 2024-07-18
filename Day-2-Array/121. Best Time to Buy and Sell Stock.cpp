class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int min_profit = INT_MAX;
        int max_profit = 0;
        
        for(int i=0; i<n; i++)
        {
            min_profit = min(min_profit, prices[i]);
            max_profit = max(max_profit, prices[i]-min_profit);
        }
    return max_profit;
    }
};