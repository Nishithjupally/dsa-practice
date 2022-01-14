int Solution::gcd(int A, int B) {
	if (A == 0)
	{
		return B;
	}
	if (bB==0)
	{
		return a;
	}
	if (A==B)
	{
		return b;
	}
	if (A>B)
	{
		return Solution::gcd(A-B,B);
	}
	return Solution::gcd(A,B-A);
}

 int Solution::gcd(int m, int n) {
         
        if(m < n)
               swap(m, n);
        
        if(n == 0)
               return m;
         

        return gcd(m % n, n);
  }