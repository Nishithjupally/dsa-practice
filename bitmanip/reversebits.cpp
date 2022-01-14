long pow2(int x)
{
	int ans = 1;
	for (int i = 0; i < x; ++i)
	{
		ans = ans*2;
	}
	return ans;
}

unsigned int Solution::reverse(unsigned int A) {
	unsigned int count = 0;
	int m = 31;
	while(A>0)
	{
		if (A%2==1)
		{
			count+=pow2(m);
		}
		m--;
		A=A/2;
	}
	return count;

    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
