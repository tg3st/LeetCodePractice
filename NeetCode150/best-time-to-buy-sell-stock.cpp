class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int i = 0;
        int j = 0;
        
        while (j < prices.size()) {

	    if (prices[j] > prices[i]) {
                maxProfit = max(maxProfit, prices[j] - prices[i]);
	    }
	    else { i = j; }

       	    ++j;
        }
        return maxProfit;
    }
};
