

int Solution::solve(vector<int> &A) {
    stack<int> s; 
    int n = A.size();
  
    // Initialize current root as minimum possible 
    // value 
    int root = INT_MIN; 
  
    // Traverse given array 
    for (int i=0; i<n; i++) 
    { 
           if (A[i] < root) 
            return 0; 
 
        while (!s.empty() && s.top()<A[i]) 
        { 
            root = s.top(); 
            s.pop(); 
        } 
  
        // At this point either stack is empty or 
        // pre[i] is smaller than root, push pre[i] 
        s.push(A[i]); 
    } 
    return 1; 
}

int Solution::solve(vector<int> &A) 
{
    int n = A.size();
    if(n==1 || n==0) return true;
    int root = A[0];
    vector <int> left;
    vector <int> right;
    int st = 1;
    while(st<n && A[st]<=root)
    {
        left.push_back(A[st]);
        st++;
    }
    while(st<n && A[st]>root)
    {
        right.push_back(A[st]);
        st++;
    }
    if(st!=n) return 0;
    int r1 = Solution::solve(left);
    int r2 = Solution::solve(right);
    return r1&r2;
}
