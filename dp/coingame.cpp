// int Solution::maxcoin(vector<int> &A) {
// 	int n = A.size();
// 	int ans = 0;
// 	int i = 0;
// 	int j = n-1;
// 	int turn = 1;
// 	int ans2 = 0;
// 	while(i<j)
// 	{
// 		if(turn)
// 		{
// 			if (A[i]>A[j])
// 			{
// 				ans+=A[i];
// 				i++;
// 			}
// 			else
// 			{
// 				ans+=A[j];
// 				j--;
// 			}
// 			turn = 0;
// 		}
// 		else
// 		{
// 			if (A[i]>A[j])
// 			{
// 				ans2+=A[i];
// 				i++;
// 			}
// 			else
// 			{
// 				ans2+=A[j];
// 				j--;
// 			}
// 			turn = 1;
// 		}
		
// 	}
// 	return max(ans,ans2);
// }

int Solution::maxcoin(vector<int> &A) {
	int n = A.size();
	int dp[n][n];
	for (int gap = 0; gap < n; ++gap)
	{
		for (int i = 0; int j = gap;j<n; ++i;j++)
		{
			int x,y,z;
			if (i+2<=j)
			{
				x = dp[i+2][j];
			}
			else
				x = 0;

			if (i+1<=j-1)
			{
				y = dp[i+1][j-1];
			}
			else
				y = 0;

			if (i<=j-2)
			{
				z = dp[i][j-2];
			}
			else
				z = 0;

			dp[i][j] = max(arr[i]+min(x,y),arr[j]+min(y,z));
		}
	}
	return dp[0][n-1];
}
