/*

Minimize the Heights II

Done code but failed a testcase, other people are facing problem.

Coded By: Harish Kumar
Date: 11/10/2021

Input:
T = 1, K = 2, N = 4
Arr[] = {1, 5, 8, 10}
Output:
5

*/


// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        int min=INT_MAX, max=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]-k<=0)
                arr[i]=arr[i]+k;
            else
               arr[i]=arr[i]-k; 
               
            if(arr[i]<min) min=arr[i];
            if(arr[i]>max) max=arr[i];
        }
        return max-min;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends