vector<int> Solution::flip(string A) 
{
    //t min = -1;
//    int min temp = -1;
    int l =1,r=1;
    int zero = 0;
    int n = A.size();
    vector <int> V;
    int X[2]={0};
    int max = -1,flag = 1;
    int flag2 =1;
    for (int i = 0; i < n; ++i)
    {
        if (zero)
        {
            if (A[i]=='0')
            {
                r++;    
            }
            else 
            {
                zero = 0;
                if (max < r-l+1)
                {
                    X[0]=l;
                    X[1] = r; 
                    max = r-l+1;
                }

            }
        }
        if (A[i] == '0' && !zero)
        {
            flag = 0; 
            zero = 1;
            l = i+1;
            r = l;
        }
        if (A[i]=='1')
        {
        	flag2 = 0;
        }
    //out<<X[0]<<" "<<X[1]<<"\n";
        

    }
    if (flag2)
    {
    	X[0] = l;
    X[1] = r;
    }
    
    if (!flag)
        {
            V.push_back(X[0]);
            V.push_back(X[1]);

        }
        return V;
}


vector<int> Solution::flip(string A) {
    int n=A.length();

    //build new array of 1s and -1s
    vector<int> ar(n);
    for(int i=0; i<n; i++)
        if(A[i]=='1')ar[i]=-1;
        else ar[i]=1;

    //pair storing the answer
    pair<int, int> ans=make_pair(INT_MAX, INT_MAX);

    //basic kadane's algorithm implementation
    //we also storing the begin point for best till now
    int best_till_now=0,best_ending_here=0,l=0;
    for(int i=0; i<n; i++){
        if(best_ending_here+ar[i]<0){
            l=i+1;
            best_ending_here=0;
        }
        else best_ending_here+=ar[i];
        if(best_ending_here>best_till_now){
            best_till_now=best_ending_here;
            ans.first=l;
            ans.second=i;
        }
    }

    //if no valid subarray found
    if(ans.first==INT_MAX)return vector<int>();

    //return answer
    vector<int> ret;
    ret.push_back(ans.first+1);
    ret.push_back(ans.second+1);
    return ret;
}
