// vector<int> Solution::lszero(vector<int> &A) {
// 	int n = A.size();
// 	std::vector<int> v;
// 	int l=0,r=0;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		int sum = A[i];
// 		//int flag = 0;
// 		for (int j = i+1; j < n; ++j)
// 		{
// 			//flag = 1;
// 			sum+=A[j];
// 			if (sum == 0)
// 			{
// 				if (r-l < j-i)
// 				{
// 					l = i;
// 					r = j;
// 				}

// 			}
// 		}
// 	}
// 	if (l == 0 && r==0 && !A[0])
// 	{
// 		return v;
// 	}
// 	for (int i = l; i <= r; ++i)
// 	{
// 		v.push_back(A[i]);
// 	}
// 	return v;
// }


vector<int> Solution::lszero(vector<int> &A) {
    vector<int> res;
    int sum=0;
    int maxLen=0;
    int l=0, r=0;
    unordered_map<int, int> um;
    for(int i=0;i<A.size();i++){
        sum+=A[i];
        if(sum==0){
            l=0;
            r=i;
            maxLen = i+1;
        }
        else{
            if(um.find(sum)!=um.end() &&(maxLen<i-um[sum])){
                maxLen=i-um[sum];
                l = um[sum]+1;
                r = i;
            }
            
            if(um.find(sum)==um.end()) um[sum]=i;
        }
    }
    //cout<<l<<" "<<r<<endl;
    if(l==r){
        if(A[l]==0) return {0};
        return {};
    }
    if(l>r){ 
        return res;
    }
    for(int i=l;i<=r;i++) res.push_back(A[i]);
    return res;
}


