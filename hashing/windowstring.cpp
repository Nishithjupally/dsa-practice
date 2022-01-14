string Solution::minWindow(string A, string B) {
	int m = A.size();
	int n = B.size();
	if (m<n)
	{
		return "";
	}
	//unordered_map <char,int> mp,mp1;
	int hashA[256]={0};
	int hashB[256]={0};
	for (int i = 0; i < n; ++i)
	 {
	 	hashB[B[i]]++;
	 } 
	 int start = 0;start_index = -1,min_len = INT_MAX;
	 int count = 0;
	 for (int i = 0; i < m; ++i)
	 {
	 	hashA[A[i]]++;

	 	if (hashB[A[j]]!=0 && hashA[A[j]]<=hashB[A[j]])
	 	{
	 		count++;
	 	}
	 	if (count == n)
	 	{
	 		while(hashA[A[start]]>hashB[A[start]]||hashB[A[start]]==0)
	 		{
	 			if (hashA[A[start]]>hashB[A[start]])
	 			{
	 				hashA[A[start]]--;
	 			}
	 			start++;
	 		}
	 		int len = i - start + 1;
	 		if (min_len>len)
	 		{
	 			min_len = len;
	 			start_index = start;
	 		}
	 	}
	 }
	 if (start_index==-1)
	 {
	 	return "";
	 }
	 return A.substr(start_index,min_len);
}



string Solution::minWindow(string A, string B) {
  vector<int> m(128, 0);
  for (char c : B) 
      m[c]++;

int remaining = B.length();
int left = 0, right = 0, minStart = 0, minLen = numeric_limits<int>::max();

while (right < A.length()){
    if (--m[A[right++]] >= 0) 
        remaining--;
    
    while (remaining == 0){
        if (right - left < minLen){
            minLen = right - left;
            minStart = left;
        }
        if (++m[A[left++]] > 0) 
            remaining++;
    }
}
    
return minLen < numeric_limits<int>::max() ? A.substr(minStart, minLen) : "";
}

