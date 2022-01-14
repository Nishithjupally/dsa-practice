
void adder(vector<int> &A;int x)
{
	if (A[A.size()-x]+1 < 10)
	{
		A[A.size()-x]+=1;
	}
	else
	{
		if (A.size()==x)
		{
			A[A.size()-x] = 0;
			A.insert(vec.begin(),1);
			return;
		}
		A[A.size()-x] = 0;
		adder(A,x+1);
	}
}

vector<int> Solution::plusOne(vector<int> &A) 
{
	adder(A,1);
	int i = 0;
	for (int i = 0; i < A.size(); ++i)
	{
		if (A[i]!= 0)
		{
			break;
		}
	}
	if (i>0)
	{
		A.erase(0,i-1);
	}
	//A.erase
	return A;
}
