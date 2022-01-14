int Solution::maxp3(vector<int> &A) {
	int n = A.size();
	int i = 0;
	int j = 0;
	int k = 0;
	int max = INT_MIN;
	for (int s = 0; s < n; ++s)
	{
		if (A[s]>A[i])
		{
			i = s;
		}
	}
	if (i == 0)
	{
		j++;
		k++;
	}
	for (int s = 0; s < n; ++s)
	{
		if (A[s]>A[j]&& s!= i)
		{
			j = s;
		}
	}
	if(i ==1 && j == 0)
	{
	    k = 2;
	}
	else if(i == 0 && j ==1)
	{
	    k++;
	}
	else if(i> 1 && j == 0)
	{
		k++;
	}
	for (int s = 0; s < n; ++s)
	{
		if (A[s]>A[k]&& s!= i && s!=j)
		{
			k = s;
		}
	}
	int im = 0;
	int jm = 0;
	for (int s = 0; s < n; ++s)
	{
		if (A[s]<A[im])
		{
			im = s;
		}
	}
	if (im == 0)
	{
		jm++;
		//k++;
	}
	for (int s = 0; s < n; ++s)
	{
		if (A[s]<A[jm]&& s!= im)
		{
			jm = s;
		}
	}
    cout<<i<<" "<<j<<" "<<k<<" "<<im<<" "<<jm<<"\n";
	if(A[i]*A[j]*A[k]>A[im]*A[jm]*A[i])
		return A[i]*A[j]*A[k];
	return A[im]*A[jm]*A[i];


}
