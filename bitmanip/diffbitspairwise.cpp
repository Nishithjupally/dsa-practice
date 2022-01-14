int Solution::cntBits(vector<int> &A) {
	long int n = A.size();
	long r = 1000000007;
	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		int temp = A[i];
		for (long int j = i+1; j < n; ++j)
		{
			//int temp = A[i];
			int temp2 = A[j];
			long temp3 = A[i]^A[j];
			int count = 0;
			while(temp3>0)
			{
				if (temp3%2==1)
				{
					count++;
				}
				temp3=temp3/2;
			}
			//return count;
			ans = (ans+count)%r + count%r;

		}
	}
	return ans;
}


#define mod 1000000007

int Solution::cntBits(vector<int> &A) {
    
    long long int ans = 0;
    int count;
    
    for(int i = 0; i < 31; i++){
        count = 0;
        for(int j = 0; j < A.size(); j++){
            if(A[j] & (1 << i)){
                count++;
            }
        }
        ans = ans + (2*count*(A.size()-count));
        ans = ans%mod;
    }
    
    return (int)ans;
}