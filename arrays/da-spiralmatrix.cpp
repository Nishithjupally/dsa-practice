vector<vector<int> > Solution::generateMatrix(int A) 
{
	long int count = 1;
	long int n = A;
	int B[n][n]={0};
	//long int C[n][n]={0};
	int k = 0, l=0;
	int m =n;
	int y =n;
	while(k < m && l < y)
	{
		for (int i = l; i < y; ++i)
		{
			B[k][i] = count++;
		}
		k++;
		for (int i = k; i < m; ++i)
		{
			B[i][y-1] = count++;
		}
		y--;
		if (k<m)
		{
			for (int i = y-1; i >= l; --i)
			{
				B[m-1][i]=count++;
			}
			m--;
		}
		if(l<y)
		{
			for (int i = m-1; i >= k; --i)
			{
				B[i][l] = count++;
			}
			l++;
		}
	}
	vector<vector<int>> v;
	for (int i = 0; i < n; ++i)
	{
		std::vector<int> v1;
		for (int j = 0; j < n; ++j)
		{
			int x = B[i][j];
			v1.push_back(x);
		}
		v.push_back(v1);
	}
	return v;
	
}
