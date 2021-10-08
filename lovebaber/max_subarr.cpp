/*

Kadane's Algorithm 


Coded By: Harish Kumar
Date: 8/10/2021

Input:
T = 1
N = 5
Arr[] = {1,2,3,-2,5}
Output:
9

*/


// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    
    long long max(int a, long long b){
        return ((long long)a>b)?a:b;
    }
    
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long temp=0;
        long long maxm=INT_MIN;
        for(int i=0;i<n;i++){
            temp=max(arr[i],arr[i]+temp);
            if(temp>maxm) maxm=temp;
        }
        return maxm;
    }
    
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends