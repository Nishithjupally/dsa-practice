int seperate(std::vector<int> &A, int n)
{
	int x = 0;
	//int n = A.size();

	for (int i = 0; i < n; ++i)
	{
		if (A[i]<=0)
		{
			swap(A[i],A[x]);
			x++;
		}
	}
	return x;
}

int missingpos(std::vector<int> &A, int sizen)
{
	for (int i = 0; i < sizen; ++i)
	{
		if (abs(A[i])-1<sizen && A[abs(A[i])-1]>0)
		{
			A[abs(A[i]) - 1] = -A[abs(A[i]) - 1];
		}
	}
	for (int i = 0; i < sizen; ++i)
	{
		if (A[i]>0)
		{
			return i+1;
		}
	}
	return sizen+1;
}

int missingfind(std::vector<int> &A, int n)
{
	int temp = seperate(A,n);
	A.erase(A.begin(),A.begin()+temp);
	int y = A.size();

	return missingpos(A,y);
}





int Solution::firstMissingPositive(vector<int> &A) 
{
	//int x = 0;
	int n = A.size();

	// for (int i = 0; i < n; ++i)
	// {
	// 	if (A[i]<=0)
	// 	{
	// 		swap(A[i],A[j]);
	// 		x++;
	// 	}
	// }
	return missingfind(A,n);

}
