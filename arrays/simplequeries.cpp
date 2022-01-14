vector< int> Solution::solve(vector<int> &A, vector<int> &B) 
{
    int n = A.size();
    int q = B.size();
    int x = 1000000007;
    std::vector<int> g;
    g.clear();
    //int max2 = -1;
    for (int i = 0; i < n; ++i)
    {
        int max2 = -1;
        for (int j = i; j < n; ++j)
        {
             max2 = max(max2,A[j]);
           // int max = -1;
            // for (int k = i; k <= j; ++k)
            // {
            //     if (max < A[k])
            //     {
            //         max = A[k];
            //     }
            // }
            g.push_back(max2);

        }
    }
    int p = g.size();
    for (int i = 0; i < p; ++i)
    {
        long long int prod = 1;
        for (long long int j = 1; j*j <= g[i]; ++j)
        {
            if (g[i]%j == 0)
            {
                if (g[i]/j == j)
                {
                    prod = (prod*j)%x;
                }
                else
                {
                    prod = (prod*j)%x;
                    prod = (prod*g[i]/j)%x;
                }
            }
        }
        g[i] = prod%x;
    }
    sort(g.begin(),g.end(),greater<int>());
    // for(auto x : g)
    // {
    //     cout<<x<<" ";
    // }
    // cout<<"\n";
   // std::vector<int> ans;
    int i = 0;
    for (i = 0; i < q; ++i)
    {
       // cout<<B[i]<<" "<<g[B[i]-1]<<endl;
       // ans.push_back(g[B[i]-1]);
        g[i] = g[B[i]-1];
    }
    g.erase(g.begin()+i,g.begin()+p-1);
    return g;
}
