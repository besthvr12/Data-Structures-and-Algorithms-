#include<bits/stdc++.h> 
  
using namespace std; 
  
int count( int S[], int m, int n ) 
{ 
    int i, j, x, y; 
  
    // We need n+1 rows as the table  
    // is constructed in bottom up 
    // manner using the base case 0 
    // value case (n = 0) 
    int a[m+1][n+1]; 
      
    // Fill the enteries for 0 
    // value case (n = 0) 
    for (i = 0; i <= m; i++) 
        a[i][0] = 1; 
    for (j = 0; j <= n; j++) 
        a[0][j] = 0; 
  
    // Fill rest of the table entries  
    // in bottom up manner  
    for (i = 1; i <=m; i++) 
    { 
        for (j = 1; j <=n; j++) 
        { 
            // Count of solutions including S[j] 
            if(S[i-1]>j){a[i][j]=a[i-1][j];
			}
			else{a[i][j]=a[i-1][j]+a[i][j-S[i-1]];
			}
        } 
    } 
    return a[m][n]; 
} 
  
// Driver Code 
int main() 
{ 
    int arr[] = {1, 2, 3}; 
    int m = sizeof(arr)/sizeof(arr[0]); 
    int n = 4; 
    cout << count(arr, m, n); 
    return 0; 
} 
  
