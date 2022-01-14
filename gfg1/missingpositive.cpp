
// CPP program to find the smallest 
// positive missing number 
#include <bits/stdc++.h> 
using namespace std; 
  
// Function to find the smallest 
// positive missing number 
int findMissingPositive(int arr[], int n) 
{ 
    // Default smallest Positive Integer 
    int m = 1; 
  
    // Store values in set which are 
    // greater than variable m 
    set<int> x; 
  
    for (int i = 0; i < n; i++) { 
        // Store value when m is less than 
        // current index of given array 
        if (m < arr[i]) { 
            x.insert(arr[i]); 
        } 
        else if (m == arr[i]) { 
            // Increment m when it is equal 
            // to current element 
            m = m + 1; 
  
            while (x.count(m)) { 
                x.erase(m); 
  
                // Increment m when it is one of the 
                // element of the set 
                m = m + 1; 
            } 
        } 
    } 
  
    // Return the required answer 
    return m; 
} 
  
// Driver code 
int main() 
{ 
    int arr[] = { 2, 3, -7, 6, 8, 1, -10, 15 }; 
  
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    // Function call 
    cout << findMissingPositive(arr, n); 
  
    return 0; 
} 
