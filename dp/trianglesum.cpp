int Solution::minimumTotal(vector<vector<int> > &A) {
	int n =A.size();
	int dp[n];
	for (int i = 0; i < A[n-1].size(); ++i)
	{
		dp[i]=A[n-1][i];
	}
	for (int i = n-2; i >=0; --i)
	{
		for (int j= 0;j<A[i].size(); ++j)
		{
			dp[j] = A[i][j] + min(dp[j],dp[j+1]);
		}
	}
	return dp[0];
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
