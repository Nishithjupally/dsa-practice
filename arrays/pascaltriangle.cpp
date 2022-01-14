vector<vector<int> > Solution::solve(int A) 
{
	vector<vector<int>> v;
	for (int i = 1; i <= A; ++i)
	{
		//int b[i];
		long int ans = 1;
		std::vector<int> v1;
		for (int j = 1; j <= i; ++j)
		{
			v1.push_back(ans);
			ans = ans*(i-j)/j;
		}
		v.push_back(v1);


	}
	return v;
}

vector<vector<int> > Solution::generate(int A) {
    if (A == 0) { return {}; }
    vector<vector<int>> r(A);
    r[0].push_back(1);
    for (int i = 1; i < A; ++i) {
        r[i].push_back(1);
        for (int j = 1; j < i; ++j) {
            r[i].push_back(r[i-1][j] + r[i-1][j-1]);
        }
        r[i].push_back(1);
    }
    return r;
}

