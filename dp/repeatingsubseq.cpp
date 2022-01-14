bool isPalindrome(string str, int l, int h) 
{ 
    // l and h are leftmost and rightmost corners of str 
    // Keep comparing characters while they are same 
    while (h > l) 
        if (str[l++] != str[h--]) 
            return false; 
  
    return true; 
} 

int Solution::anytwo(string A) {
	int n = A.length();
	int freq[256] = {0};
	for (int i = 0; i < n; ++i)
	{
		freq[A[i]]++;
		if (freq[A[i]]>2)
		{
			return 1;
		}
	}
	int k = 0;
	for (int i = 0; i < n; ++i)
	{
		if (freq[A[i]]>1)
		{
			A[k++]=A[i];
		}
	}
	A[k]='\0';

	if (isPalindrome(A,0,k-1))
	{
		if (k & 1)
		{
			return A[k/2]==A[k/2 -1];
		}
		return 0;
	}
	return 1;
}
