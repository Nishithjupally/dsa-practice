// int Solution::hammingDistance(const vector<int> &A) {
// 	int n = A.size();
// 	int count = 0;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		for (int j = i+1; j < n; ++j)
// 		{
// 			int temp = A[i]^A[j];
// 			while(temp != 0)
// 			{
// 				if(temp%2 == 1)
// 				{
// 					count++;
// 				}
// 				temp = temp/2;
// 			}
// 		}
// 	}
// 	return count*2;
// }


int Solution::hammingDistance(const vector<int> &A) {
    int inputSize = A.size();
    int mod = 1000000007;
    int sum = 0;
    for (int bitPosition = 0; bitPosition < 31; bitPosition++) {
        int cntBitOne = 0, cntBitZero = 0;
        for(int i = 0; i < inputSize; i++) {
            if (A[i] & (1 << bitPosition)) cntBitOne++;
            else cntBitZero++;
        }
        sum = sum + ((2LL * cntBitOne * cntBitZero) % mod);
        if (sum >= mod) sum = sum - mod;
    }
    return sum;
}


