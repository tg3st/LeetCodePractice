class Solution {
public:
	int maxProfit(vector<int>& prices) {
        	// buy price = min
		// sell price = max
		// profit = sell - buy
		// we can only move forward in array
		// b/c we can only move forward in time
		// sliding window approach
		int buy=0, sell=1, profit=0;
		while (sell < prices.size()) {
			if (prices[sell] > prices[buy]) {
				// if there is a profit update max profit
				profit = max(profit, prices[sell] - prices[buy]);
			}
			else
				// else catchup buy pointer to sell pointer
				buy = sell;
			++sell;
		}
		return profit;
	}
};
