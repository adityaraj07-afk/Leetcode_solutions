class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int sell;
        int ans = 0;
        int n = prices.size();
        for(int i=1; i<n; i++){
             if(prices[i] < buy) {
             buy = prices[i];
             } 
             sell = prices[i];
             int profit = sell - buy; 
             if(profit > ans) {
            ans = profit;
           }
        }   
        return ans;  
    }
};