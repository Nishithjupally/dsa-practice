vector<int> Solution::nextPermutation(vector<int> &A) 
{
	int n = A.size();
	if (n==1)
	{
		return A;
	}
	int i = n-2;
	while((i>=0)&&(A[i]>=A[i+1]))
	{
		i--;
	}
	if (i>=0)
	{
		int j = n-1;
		while((j>=i)&&(A[j]<=A[i]))
		{
			j--;
		}
		swap(A[i],A[j]);
	}
	reverse(A.begin()+i+1,A.end());
	return A;
}
