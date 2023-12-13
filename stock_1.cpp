class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy=INT_MAX;
        int sell=INT_MIN;
        int profit = 0;
        for(int i=0;i<n;i++){ //Traverse the prices
            if(prices[i] < buy){ //when you find a price lesser than current buy, update current buy
                buy = prices[i];
                sell = prices[i];
            }
            else if(prices[i] > sell && (prices[i] - buy) > profit){ //when you find a price greater than current sell AND gives greater profit, update sell and update profit
                sell = prices[i];
                profit = sell - buy;
            }
        }
        return profit;
    }
};
