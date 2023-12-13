class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy = INT_MAX;
        int bought = 0; //flag
        
        int profit = 0;
        for(int i=0;i<n;i++){
            if(bought){
                if(prices[i] > buy){
                    profit += prices[i] - buy;
                    buy = prices[i];
                }
                else{
                    buy = prices[i];
                }
            }
            else{
                buy = prices[i];
                bought = 1;
            }
        }
        return profit;
    }
};
