string Solution::solve(string A) {
	string ans = "";
	int arr[26]= {0};
	queue<char> q;
	int n = A.length();
	q.push(A[0]);
	string s1(1,A[0]);
	ans = ans + s1;
	 for (int i = 1; i < n; ++i)
	 {
	 	int j = A[i]-'a';
	 	arr[j]++;
	 	while(arr[q.top()-'a']>1)
	 	{
	 		q.pop();
	 	}
	 	if (q.empty())
	 	{
	 		ans = ans + "#";
	 	}
	 	else
	 	{
	 		string s2(1,q.top());
	 		ans = ans + s2;
	 	}


	 } 
	 return ans;
}
