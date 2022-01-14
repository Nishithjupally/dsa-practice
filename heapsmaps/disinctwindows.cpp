// vector<int> Solution::dNums(vector<int> &A, int B) {
// 	std::vector<int> v;
// 	int N = A.size();
// 	if (B > N)
// 	{
// 		return v;
// 	}
// 	//cout<<"kk\n";
// 	for (int i = 0; i < N-B+1; ++i)
// 	{
// 	    //cout<<"kk2\n";
// 		int count = 0;
// 		map <int,int> m;
// 		for (int j = i; j < i+B ; ++j)
// 		{
// 			if (m[A[j]]==0)
// 			{
// 				count++;
// 				m[A[j]]=1;
// 			}
// 		}
// 		m.clear();
// 		v.push_back(count);
// 	}
// 	return v;
// }
vector<int> Solution::dNums(vector<int> &A, int B) {
	std::vector<int> v;
	int N = A.size();
	if (B > N)
	{
		return v;
	}
	map<int,int> m;
	int count = 0;

	for (int i = 0; i < B; i++) { 
        if (m[A[i]] == 0) { 
            count++; 
        } 
        m[A[i]] += 1; 
    } 
    v.push_back(count);
    for (int i = B; i < N; ++i)
    {
    	if (m[A[i-B]]==1)
    	{
    		count--;
    	}
    	m[A[i-B]]-=1;
    	if (m[A[i]]==0)
    	{
    		count++;
    	}
    	m[A[i]]++;
   		v.push_back(count);
    }
    


	return v;
}
