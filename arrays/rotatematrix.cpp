void Solution::rotate(vector<vector<int> > &A) 
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
  	int n = A.size();
    for (int i = 0; i < n/2; ++i)
    {
    	for (int j = i; j < n-i-1; ++j)
    	{
    		int temp = A[i][j];
    		A[i][j] = A[n-1-j][i];
    		A[n-j-1][i] = A[n-i-1][n-j-1];
    		A[n-i-1][n-j-1]=A[j][n-i-1];
    		A[j][n-i-1] = temp;
    	}
    }
}
