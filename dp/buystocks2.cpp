int Solution::maxProfit(const vector<int> &A) {
	int n = A.size();

	int profit = 0;

	if (n==1)
	{
		return 0;
	}
	int i = 0;
	while(i < n-1)
	{
		while(i<n-1 && A[i+1]<A[i])
		{
			i++;
		}
		if (i == n-1)
		{
			break;
		}
		int buy = i++;
		while(i<n && A[i]>A[i-1])
		{
			i++;
		}
		int sell = i-1;
		profit+= A[sell]-A[buy;]
	}
	return profit;
}


    int Solution::maxProfit(const vector<int>& prices) {
        int ans=0;
        for(int i=1;i<prices.size();i++){
            ans+= max(prices[i]-prices[i-1], 0);
        }
        return ans;
    }