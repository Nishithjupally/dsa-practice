long int dp[101];
long int nck[101][101];
long int log21[101];
long int choose(long int n, long int k) 
	{ 
	    if (k > n) 
	        return 0; 
	    if (n <= 1) 
	        return 1; 
	    if (k == 0) 
	        return 1; 
	  
	    if (nck[n][k] != -1) 
	        return nck[n][k]; 
	  
	    long int answer = choose(n - 1, k - 1) + choose(n - 1, k); 
	    nck[n][k] = answer; 
	    return answer; 
	} 

	long int getLeft(long int n) 
	{ 
	    if (n == 1) 
	        return 0; 
	  
	    long int h = log21[n]; 
	  
	    // max number of elements that can be present in the  
	    // hth level of any heap 
	    long int numh = (1 << h); //(2 ^ h) 
	  
	    // number of elements that are actually present in 
	    // last level(hth level) 
	    // (2^h - 1) 
	    long int last = n - ((1 << h) - 1); 
	  
	    // if more than half-filled 
	    if (last >= (numh / 2)) 
	        return (1 << h) - 1; // (2^h) - 1 
	    else
	        return (1 << h) - 1 - ((numh / 2) - last); 
	} 

long int numberOfHeaps(long int n) 
{ 
    if (n <= 1) 
        return 1; 
  
    if (dp[n] != -1) 
        return dp[n]; 
  
    long int left = getLeft(n); 
    long int ans = (choose(n - 1, left) * numberOfHeaps(left)) *(numberOfHeaps(n - 1 - left)); 
    dp[n] = ans; 
    return ans%(1000000007); 
} 
int Solution::solve(int A) {
	long int n = A;
	for (long int i = 0; i <= n; i++) 
        dp[i] = -1; 
  
    for (long int i = 0; i <= n; i++) 
        for (long int j = 0; j <= n; j++) 
            nck[i][j] = -1; 
  
    long int currLog2 = -1; 
    long int currPower2 = 1; 
  
    // for each power of two find logarithm 
    for (long int i = 1; i <= n; i++) { 
        if (currPower2 == i) { 
            currLog2++; 
            currPower2 *= 2; 
        } 
        log21[i] = currLog2; 
    } 
  
    return numberOfHeaps(n)%(1000000007); 

	

}

#define MAXN 105

long long int dp[MAXN];  	/* dp[i] = number of max heaps for i distinct integers */
long long int nck[MAXN][MAXN];	/* nck[i][j] = i choose j if i>=j else 0 */
int log_2[MAXN];			/* log_2[i] = int(log_2 base 2 of i) */
long long int MOD = 1000000007;

long long int choose(int n,int k)
{
        if(k>n)
            return 0;
	if(n<=1)
	    return 1;
	if(k==0)
	    return 1;

        if(nck[n][k]!=-1)
            return nck[n][k];
        long long int answer = choose(n-1,k-1) + choose(n-1,k);
        answer%=MOD;
        nck[n][k] = answer;
        return answer;
}
    
int getL(int n)
{
        if(n==1)
            return 0;
            
        int h = log_2[n];
        int p = n - ((1<<(h)) - 1);
        int m = (1<<h);
        if(p>=(m/2))
            return (1<<(h)) - 1;
        else
            return (1<<(h)) - 1 - ((m/2) - p);
}

long long int getNumberOfMaxHeaps(int n)
{
        if(n<=1)
            return 1;
            
        if(dp[n]!=-1)
            return dp[n];

        int L = getL(n);
        long long int ans = (choose(n-1,L)*getNumberOfMaxHeaps(L))%MOD*(getNumberOfMaxHeaps(n-1-L));
        ans%=MOD;
        dp[n] = ans;
        return ans;
}


int Solution::solve(int n) {
    
     for(int i=0;i<=n;i++)
            dp[i]=-1;
            
        for(int i=0;i<=n;i++)
            for(int j=0;j<=n;j++)
                nck[i][j] = -1;
                
        int currlog_2Answer = -1;
        int currPower2 = 1;
        for(int i=1;i<=n;i++)
        {
	    if(currPower2==i)
            {
                currlog_2Answer++;
                currPower2*=2;
            }
            log_2[i] = currlog_2Answer;
        }
        
        return (int)getNumberOfMaxHeaps(n);
    
}

