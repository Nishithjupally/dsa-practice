int binarySearch(std::vector<int> arr, int low,  
                  int high, int key) 
{ 
  if (high < low) 
    return -1; 
      
  int mid = (low + high)/2; /*low + (high - low)/2;*/
  if (key == arr[mid]) 
    return mid; 
      
  if (key > arr[mid]) 
    return binarySearch(arr, (mid + 1), high, key); 
      
    return binarySearch(arr, low, (mid -1), key); 
} 
  
/* Function to get pivot. For array 3, 4, 5, 6, 1, 2 
   it returns 3 (index of 6) */
int findPivot(vector<int> arr, int low, int high) 
{ 
  // base cases 
  if (high < low) return -1; 
  if (high == low) return low; 
  
   int mid = (low + high)/2; /*low + (high - low)/2;*/
   if (mid < high && arr[mid] > arr[mid + 1]) 
    return mid; 
      
   if (mid > low && arr[mid] < arr[mid - 1]) 
    return (mid-1); 
      
   if (arr[low] >= arr[mid]) 
    return findPivot(arr, low, mid-1); 
      
   return findPivot(arr, mid + 1, high); 
} 

int Solution::search(const vector<int> &A, int B) {
	int n = A.size();
	int pivot = findPivot(A, 0, n-1); 
	int key = B;
  
  if (pivot == -1) 
    return binarySearch(A, 0, n-1, key); 
  
  if (A[pivot] == key) 
    return pivot; 
      
  if (A[0] <= key) 
    return binarySearch(A, 0, pivot-1, key); 
      
    return binarySearch(A, pivot+1, n-1, key); 
}
