vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    unordered_map<string, vector<int> > mp;
    for(int i=0;i<A.size();i++) {
        string st = A[i];
        sort(st.begin(), st.end());
        if(mp.find(st)!=mp.end())
            mp[st].push_back(i+1);
        else
            mp.insert(pair <string, vector<int> > (st, {i+1}));
    }
    
    vector<vector<int> > result;
    for(auto it=mp.begin();it!=mp.end();it++)
        result.push_back(it->second);
    sort(result.begin(), result.end());
    return result;
}

vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<vector<int> > ans;
    map<int,vector<int>> B;
    
    for(int i=0;i<A.size();i++)
    {
        int sum=0;
        
        for(int j=0;j<A[i].size();j++)
            sum+=A[i][j];    
            
        B[sum].push_back(i+1);
    }
    for(auto it=B.begin();it!=B.end();it++)
    ans.push_back(it->second);
    
    return ans;
    
}
