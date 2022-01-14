vector<int> Solution::findPerm(const string A, int B) 
{
	int less = 1;
	int large = B;
	std::vector<int> v;
	for (int i = 0; i < A.length(); ++i)
	{
		if (A[i] == 'D')
		{
			v.push_back(large--);
		}
		else if(A[i] == 'I')
		{
			v.push_back(less++);
		}
	}
	if (A[A.length()-1]=='D')
	{
		v.push_back(large--);
	}
	else
	{
		v.push_back(less++);
	}
	return v;
}
