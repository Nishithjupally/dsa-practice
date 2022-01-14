void ans1(int A,int B,std::vector<int> &v,int x)
{
	queue<int> q;
	q.push(x);
	while(!q.empty())
	{
		int y = q.front();
		q.pop();
		if (y>=A && y<=B)
		{
			v.push_back(y);
		}
		if (y>B||x==0)
		{
			continue;
		}
		int l = y%10;
		int f1 = 10*A +l-1;
		int f2 = 10*A +l+1;
		if (l==0)
		{
			q.push(f2);
		}
		else if (l==9)
		{
			q.push(f1);
		}
		else
		{
			q.push(f1);
			q.push(f2);
		}
	}
}

vector<int> Solution::stepnum(int A, int B) {
	std::vector<int> v;
	for (int i = 0; i <= 9; ++i)
	{
		ans1(A,B,v,i);
	}
	return v;
}

//jhcbhjkc