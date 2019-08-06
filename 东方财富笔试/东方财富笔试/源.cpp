class Solution {
public:
	int maxProfit(vector<int>& prices)
	{
		int len = prices.size();
		if (len == 0)
			return 0;
		int profit[len];
		profit[0] = 0;
		int maxprofit = 0, minprice = prices[0];
		for (int i = 0; i < len; i++)
		{
			minprice = min(minprice, prices[i]);
			if (prices[i] - minprice > maxprofit)
			{
				maxprofit = prices[i] - minprice;
			}
			profit[i] = maxprofit;
		}
		int maxprice = prices[len - 1], comp = profit[len - 1];
		maxprofit = 0;
		for (int i = len - 2; i > 0; i--)
		{
			maxprice = max(maxprice, prices[i + 1]);
			if (maxprofit < maxprice - prices[i])
			{
				maxprofit = maxprice - prices[i];
			}
			if (maxprofit + profit[i] > comp)
			{
				comp = maxprofit + profit[i];
			}
		}
		return comp;
	}
};

