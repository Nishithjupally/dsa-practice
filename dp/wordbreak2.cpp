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

void s2(string A,vector<string> &B,vector<string> &C,string out)
{
    if (A.size()==0)
    {
        C.push_back(out);
        return;
    }
    for (int i = 1; i < A.size()+1; ++i)
    {
        string prefix = A.substr(0,i);
        if (dictcontains(prefix))
        {
           s2(A.substr(i),B,C,out+" "+prefix);
        }

    }
}

vector<string> Solution::wordBreak(string A, vector<string> &B) {
    int size =A.size();
    vector<string> C;
    //int dp[size+1]={0};
    s2(A,B," ");



    return C;
}