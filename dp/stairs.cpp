int Solution::climbStairs(int A) {
	int arr[A+1];
	//int n = A;
	arr[0]=0;
	arr[1]=1;
	arr[2]=2;
	for (int i = 3; i < A+1; ++i)
	{
		arr[i] = arr[i-1]+arr[i-2];
	}
	return arr[A];
}
