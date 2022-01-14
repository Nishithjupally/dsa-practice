 int gcd(int m, int n) {
         
        if(m < n)
               swap(m, n);
        
        if(n == 0)
               return m;
         

        return gcd(m % n, n);
  }

  int Solution::cpFact(int A, int B) {
  	for (int i = A; i > 0; --i)
  	{
  		if (A%i == 0)
  		{
  			if (gcd(i,B)==1)
  			{
  				return i;
  			}
  		}
  	}
}

int gcd(int A, int B){
    if(A==0) return B;
    if(B==0) return A;
    if(A<B) swap(A, B);
    return gcd(A%B, B);
}
int Solution::cpFact(int A, int B) {
    for(int g=gcd(A, B); g>1; g=gcd(A, g)) A/=g;
    return A;
}

