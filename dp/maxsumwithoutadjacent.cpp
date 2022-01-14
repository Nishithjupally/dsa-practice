
int Solution::adjacent(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    
    if(A.size() == 0){
        return 0;
    }
    
    int inc = 0, exc = 0;
    
    for(int i = 0; i < A[0].size(); i++){
        int num = max(A[0][i], A[1][i]);
        
        int temp = max(exc, inc);
    
        inc = exc + num;
        exc = temp;
    }
    
    
    return max(inc, exc);
}

int FindMaxSum(int arr[], int n) 
{ 
  int incl = arr[0]; 
  int excl = 0; 
  int excl_new; 
  int i; 
  
  for (i = 1; i < n; i++) 
  { 
     /* current max excluding i */
     excl_new = (incl > excl)? incl: excl; 
  
     /* current max including i */
     incl = excl + arr[i]; 
     excl = excl_new; 
  } 
  
   /* return max of incl and excl */
   return ((incl > excl)? incl : excl); 
} 
  
/* Driver program to test above function */
int main() 
{ 
  int arr[] = {5, 5, 10, 100, 10, 5}; 
  int n = sizeof(arr) / sizeof(arr[0]); 
  printf("%d n", FindMaxSum(arr, n)); 
  return 0; 
} 