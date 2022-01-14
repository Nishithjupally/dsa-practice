vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) 
{
	int count = 1;
	int i = 0, j =0;
	int n = A[0].size();
	vector<std::vector<int>> v;
	//while(i+j<=n+1)
	//{
		for (int sum = 0; sum <= 2*(n-1); ++sum)
		{
			std::vector<int> v1;
			//j = sum;
			//i = 0;
			if (sum <= n-1)
			{
				j = sum;
			    i = 0;
				for (int k = 0; k < sum+1; ++k)
				{
					v1.push_back(A[i][j]);
					i++;
					j--;
				}
			}
			else
			{
				j = n-1;
				i = sum - j;
				int p = 2*(n-1)-sum;
				for (int z = 0; z <p+1; ++z)
				{
					v1.push_back(A[i][j]);
					i++;
					j--;
				}

			}
			
			
			v.push_back(v1);

		}
		return v;
	//}
}



vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    int n = A.size();
    int N = 2*(n-1) + 1;//number of vectors in ans
    vector<vector<int>> ans(N);
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
            ans[i+j].push_back(A[i][j]);//sum of index values in 2d array gives the index in ans
    }
    return ans;
}

