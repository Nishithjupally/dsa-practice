int Solution::uniquePaths(int A, int B) {

	if (A == 1 || B == 1)
	{
		return 1;
	}
	else
	{
		return Solution::uniquePaths(A,B-1)+Solution::uniquePaths(A-1,B);
	}
}
