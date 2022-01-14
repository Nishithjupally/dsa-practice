int dictcontains(std::vector<string> &v,string word)
{
	int n = v.size();
	for (int i = 0; i < n; ++i)
	{
		if (v[i].compare(word)==0)
		{
			return 1;
		}
	}
	return 0;
}

int Solution::wordBreak(string A, vector<string> &B) {
	int size =A.size();
	if (size==0)
	{
		return 1;
	}

	int dp[size+1]={0};

	for (int i = 1; i < size+1; ++i)
	{
		if (!dp[i]&&dictcontains(B,A.substr(0,i)))
		{
			//cout<<A.substr(0,i)<<"\n";
			dp[i] = 1;
			cout<<i<<"\n";
		}
		if (dp[i])
		{
			if (i==size)
			{
				return 1;
			}
			for (int j = i+1; j <= size; ++j)
			{
				if (!dp[j]&&dictcontains(B,A.substr(i,j-i)))
				{
					dp[j]=1;
					//cout<<A[j]<<"\n";
					//cout<<j<<" j\n";
				}
				if (j == size && dp[j]==1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int Solution::wordBreak(string A, vector<string> &B) {
    int n=A.size();
    vector<int> dp(n+1);
    
    dp[0]=1;
    for(int i=1;i<=n;++i)
    {
        dp[i]=0;
        for(auto si:B)
        {
            int lb = i-si.size();
            if(lb<0)continue;
            
            //si.length back from i'th (indx base 1) character 
            if(A.substr(lb,si.size()) == si && dp[lb])
            {
                dp[i]=1;
                break;
            }
        }
    }
    
    return dp[n];
}
