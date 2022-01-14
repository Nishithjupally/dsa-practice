vector<vector<int> > Solution::fourSum(vector<int> &A, int B) {
    sort(A.begin(), A.end());
    vector<vector<int> > res;
    auto size = A.size();
    for (auto i = 0; i<size-3; ++i)
    {
        if (i>0 && A[i] == A[i-1])
            continue;
        for (auto j = i+1; j<size-2; ++j)
        {
            if (j>i+1 && A[j] == A[j-1])
                continue;
                
            int ptr1 = j+1, ptr2 = size-1;
            while (ptr1 < ptr2)
            {
                auto sum = A[i] + A[j] + A[ptr1] + A[ptr2];
                if (sum == B)
                {
                    vector<int> temp;
                    temp.emplace_back(A[i]);
                    temp.emplace_back(A[j]);
                    temp.emplace_back(A[ptr1]);
                    temp.emplace_back(A[ptr2]);
                    res.emplace_back(temp);
                    ++ptr1;
                    while (ptr1<ptr2 && A[ptr1] == A[ptr1-1])
                        ++ptr1;
                }
                else if (sum > B)
                    --ptr2;
                else if (sum < B)
                    ++ptr1;
            }
        }
    }
    return res;
}



vector<vector<int> > Solution::fourSum(vector<int> &A, int target) {
    vector<vector<int>> ans;
    if(A.size()<4)
        return ans;
    sort(A.begin(),A.end());
    
    for(int i=0;i+3<A.size();i++)
    {
        if(i>0 && A[i]==A[i-1])
            continue;
        for(int j=i+1;j+2<A.size();j++)
        {
            if(j>i+1 && A[j]==A[j-1])
                continue;
            int k=j+1,l=A.size()-1;
            while(k<l)
            {
                int sum=A[i]+A[j]+A[k]+A[l];
                if(sum<target)
                    k++;
                else if(sum>target)
                    l--;
                else
                {
                    ans.push_back({A[i],A[j],A[k],A[l]});
                    k++;
                    while(k<l && A[k]==A[k-1])
                        k++;
                }
            }
        }
    }
    
    return ans;
    
}

