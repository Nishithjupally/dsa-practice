int Solution::maximumGap(const vector<int> &A) 
{
	int maxf = -1;
	int n = A.size();
	if(n==1)
	{
	    return 0;
	}
	int l[n] = {0};
	int r[n] = {0};
	l[0] = A[0];
	for (int i = 1; i < n; ++i)
	{
		l[i] = min(l[i-1],A[i]);
	}
	r[n-1]=A[n-1];
	for (int j = n-2; j >= 0; --j)
	{
		r[j] = max(r[j+1],A[j]);
	}
	int i =0,j=0;
	while(i<n && j<n)
	{
		if (l[i]<=r[j])
		{
			maxf = max(maxf,j-i);
			j++;
		}
		else
			i++;
	}
	
	return maxf;
}

class Solution {
    public:
        int maximumGap(const vector<int> &num) {
            if (num.size() == 0) return -1;
            if (num.size() == 1) return 0;
            vector<pair<int, int> > toSort; 
            for (int i = 0; i < num.size(); i++) {
                toSort.push_back(make_pair(num[i], i));
            }
            sort(toSort.begin(), toSort.end());
            int len = toSort.size();
            int maxIndex = toSort[len - 1].second;
            int ans = 0;
            for (int i = len - 2; i >= 0; i--) {
                ans = max(ans, maxIndex - toSort[i].second);
                maxIndex = max(maxIndex, toSort[i].second);
            }
            return ans;
        }
};
