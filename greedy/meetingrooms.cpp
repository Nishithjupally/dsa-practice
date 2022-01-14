int solve1(vector<vector<int> > &A){
    int n=A.size();
     int start[n];
     int end[n];
     for (int i=0; i<n; i++) {
       start[i]=A[i][0];
       end[i]=A[i][1];
     }
     sort(start,start+n);
     sort(end,end+n);
     int i=0, j=0, res=0;
     while (i<n) {
       if (start[i]<end[j])
        i++;
       else if (start[i]>end[j])
        j++;
       else {
         i++;
         j++;
       }
       res=max(res,i-j);
     }
     return res;
}

int Solution::solve(vector<vector<int> > &A) {
    return solve1(A);
}