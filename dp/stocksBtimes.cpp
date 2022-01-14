int Solution::solve(vector<int> &A, int B) {
	int n = A.size();
	int k = B;
	int profit[B+1][n+1];

	for (int i = 0; i < k+1; ++i)
	{
		profit[i][0]=0;
	}
	for (int i = 0; i < n+1; ++i)
	{
		profit[0][j] = 0;
	}

	for (int i = 1; i < k+1; ++i)
	{
		int prevDiff = INT_MIN;
		for (int j = 1; j < n; ++j)
		{
			 prevDiff = max(prevDiff, profit[i - 1][j - 1] - A[j - 1]); 
            profit[i][j] = max(profit[i][j - 1],A[j] + prevDiff);
		}
	}
	return profit[k][n-1];
}
