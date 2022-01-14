int Solution::titleToNumber(string A) {
	int n = A.length();
	int ans = 0;
	for (int i = n-1; i >= 0; --i)
	{
		ans += pow(26,n-1-i)*((int(A[i])-64));
	}
	return ans;
}
