vector<long long int> Solution::repeatedNumber(const vector<long long int> &A) 
{
	long long a[A.size()+1]={0};
	long long p,q,sum = 0;
	long long n = A.size();
	for (long long int i = 0; i < n; ++i)
	{
		if (a[A[i]] == 1)
		{
			p = A[i];
			break;
		}
		a[A[i]] = 1;
	}
	for (long long int i = 0; i < n; ++i)
	{
		sum+=A[i];
	}
	sum = (-1)*sum;
	for (long long int i = 1; i < n+1; ++i)
	{
		sum += i;
	}
	q = sum+p;

	return make_pair(p,q);
}
