vector<int> Solution::wave(vector<int> &A) 
{
	int n = A.size();
	int flag = 1;
	for (int i = 0; i < n-1; ++i)
	{
		if (flag)
		{
			if (A[i]>A[i+1])
			{
				swap(A[i],A[i+1]);
			}
		}
		else
		{
			if (A[i]<A[i+1])
			{
				swap(A[i],A[i+1]);
			}
		}
		flag = !flag;
	}
	return A;
}
