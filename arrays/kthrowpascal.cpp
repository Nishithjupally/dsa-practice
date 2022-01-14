vector<int> Solution::getRow(int A) 
{
	//vector<vector<int>> v;
	//for (int i = 1; i <= A; ++i)
	//{
		//int b[i];
		long int ans = 1;
		std::vector<int> v1;
		for (int j = 1; j <= A+1; ++j)
		{
			v1.push_back(ans);
			ans = ans*(A+1-j)/j;
		}
		//v.push_back(v1);


	//}
	return v1;
}
