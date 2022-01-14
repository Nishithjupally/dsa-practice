int Solution::maxSubArray(const vector<int> &A)
 {
 	long long int max = -1000000000;
 	long long int max_temp = 0;
 	for (long long int i = 0; i < A.size(); ++i)
 	{
 		max_temp+= A[i];
 		if (max_temp>max)
 		{
 			max = max_temp;
 		}
 		if (max_temp < 0)
 		{
 			max_temp = 0;
 		}
 	}
 	return max;
 }
