int Solution::findMinXor(vector<int> &A) {
	int ans = INT_MAX;
	int n = A.size();
	for (int i = 0; i < n; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{
			ans = min(ans,A[i]^A[j]);
		}
	}
	return ans;
}

int Solution::findMinXor(vector<int> &A) {
    sort(A.begin(),A.end());
    int ans=2147483647;
    for(int i=0;i<A.size()-1;i++)
    ans=min(ans,A[i]^A[i+1]);
    return ans;
}