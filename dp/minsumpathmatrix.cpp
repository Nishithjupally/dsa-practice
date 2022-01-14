int Solution::minPathSum(vector<vector<int> > &A) {
	int m = A.size();
	int n = A[0].size();
	int d[m][n];
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			d[i][j]=A[i][j];
		}
	}
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (j+i == 0)
			{
				continue;
			}
			if (i == 0)
			{
				d[i][j]+=d[i][j-1];
			}
			else if(j==0)
			{
				d[i][j]+=d[i-1][j];
			}
			else
			{
				//d[i][j]= d[i][j]+min(d[i-1][j],d[i][j-1]);
				if (d[i-1][j]>0 && d[i][j-1]>0)
				{
					d[i][j]= d[i][j]+min(d[i-1][j],d[i][j-1]);
				}
				else if
			}
			
		}
	}
	return d[m-1][n-1];
}
