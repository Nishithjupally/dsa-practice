int Solution::solve(string A, string B) {
	int m = A.length();
	int n = B.length();

	int dp[m+1][n+1];

	for (int i = 0; i < m+1; ++i)
	{
		for (int j = 0; j < n+1; ++j)
		{
			if (i == 0 || j == 0)
			{
				dp[i][j]= 0;
			}
			else if (A[i-1]==B[j-1])
			{
				dp[i][j]= 1+ dp[i-1][j-1];
			}
			else
			{
				dp[i][j]= max(dp[i][j-1],dp[i-1][j]);
			}
		}
	}
	return dp[m][n];
}
