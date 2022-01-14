int Solution::solve(vector<int> &A) 
{
	int flag = -1;
	sort(A.begin(),A.end());
	int n = A.size();
	if (A[n-1] == 0)
	{
		return 1;
	}
	for (int i = 0; i < n-1; ++i)
	{
		if (A[i]<A[i+1] && A[i]>0)
		{
		    //cout<<A[i]<<" "<<A[i+1]<<" "<<n-i-1<<"\n";
			if (n-i-1 == A[i])
			{
				flag = 1;
				break;
			}
		}
	}
	return flag;
    
}
