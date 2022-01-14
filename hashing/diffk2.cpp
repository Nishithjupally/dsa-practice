int Solution::diffPossible(const vector<int> &A, int B) {
	unordered_map<int,int> mp;
	for (int i = 0; i < A.size(); ++i)
	{
		int temp = A[i]-B;
		int temp2 = A[i]+B;
		if (mp.find(temp)!=mp.end()||mp.find(temp2)!=mp.end())
		{
			return 1;
		}
		mp[A[i]]=1;
		
	}
	return 0;
}
