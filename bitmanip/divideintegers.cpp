int Solution::divide(int A, int B) {
    if (A == INT_MIN && B == -1 || B==0)
    {
    	return INT_MAX;
    }
    if (A==INT_MAX&&B==1)
    {
    	return INT_MAX;
    }
    if (A==0 && B!=0)
    {
    	return 0;
    }
    int neg = 0;
    if (A<0&&B>0 || A>0&&B<0)
    {
    	neg = 1;
    }
    A=abs(A);
    B=abs(B);
    int ans = 0;
    A = A-B;
    while(A>0)
    {
    	ans++;
    	A=A-B;

    }
    if (neg)
    {
    	if(B==1)
	    {
	        return -(ans+1);
	    }
   	 return -ans;
    }
    if(B==1)
    {
        return ans+1;
    }
    return ans;
}
