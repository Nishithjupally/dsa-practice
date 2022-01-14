int Solution::singleNumber(const vector<int> &A) {
 int ans;
 int n = A.size();
 ans = A[0]^A[1];
 for (int i = 2; i < n; ++i)
 {
 	ans = ans^A[i];
 }
 return ans;
}
