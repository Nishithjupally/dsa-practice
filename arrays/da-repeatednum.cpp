
  
// Function to find one of the repeating 
// elements 
int findRepeatingNumber(const vector<int> &arr, int n) 
{ 
    // Size of blocks except the 
    // last block is sq 
    int sq = sqrt(n); 
  
    int range = (n / sq) + 1; 

    int count[range] = {0}; 
  
    for (int i = 0; i <= n; i++) 
    { 
        count[(arr[i] - 1) / sq]++; 
    } 
  
    int selected_block = range - 1; 

    for (int i = 0; i < range - 1; i++) 
    { 
        if (count[i] > sq) 
        { 
            selected_block = i; 
            break; 
        } 
    } 
  
    unordered_map<int, int> m; 
    for (int i = 0; i <= n; i++) 
    { 
        // checks if the element belongs to the 
        // selected_block 
        if ( ((selected_block * sq) < arr[i]) && 
                (arr[i] <= ((selected_block + 1) * sq))) 
        { 
            m[arr[i]]++; 
  
            // repeating element found 
            if (m[arr[i]] > 1) 
                return arr[i]; 
        } 
    } 
  
    // return -1 if no repeating element exists 
    return -1; 
} 

int Solution::repeatedNumber(const vector<int> &A) 
{
    int n = A.size()-1;
    cout<< findRepeatingNumber(A, n) << endl; 

}

  

