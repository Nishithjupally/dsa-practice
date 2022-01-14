int Solution::solve(string A) {
	int n = A.length();
	int dp[n][n];
	for (int i = 0; i < n; ++i)
	{
		dp[i][i] = 1;
	}
	for (int c = 2; c < n+1; ++c)
	{
		for (int i = 0; i < n-c+1; ++i)
		{
			int j = i+c-1;
			if (A[i]==A[j]&&c==2)
			{
				dp[i][j]=2;
			}
			else if(A[i]==A[j])
				dp[i][j]=dp[i+1][j-1]+2;
			else
				dp[i][j]= max(dp[i][j-1],dp[i+1][j]);
		}
	}
	return dp[0][n-1];
}
