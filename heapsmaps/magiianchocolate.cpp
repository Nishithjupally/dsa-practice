int Solution::nchoc(int A, vector<int> &B) {
	int n = B.size();
	priority_queue<int> pq;
	for (int i = 0; i < n; ++i)
	{
		pq.push(B[i]);
	}
	int ans = 0;
	for (int i = 0; i < A; ++i)
	{
		ans = (ans +pq.top())%(1000000007);
		long temp = pq.top();
		pq.pop();
		pq.push(top/2);
	}
	return ans;
}

long long int mod = 1000000007;
int Solution::nchoc(int A, vector<int> &B) {
	int N = B.size();
	int K = A;
	long long int ans = 0;
	priority_queue<int> heap(B.begin(),B.end());
	while(K--){
		long long int max_elem = heap.top();
		ans += max_elem;
		ans = ans % mod;
		heap.pop();
		heap.push((int)(max_elem/2));
	}   
	return ans;
}