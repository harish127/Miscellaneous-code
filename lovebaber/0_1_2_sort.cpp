/*

Sort an array of 0s, 1s and 2s

this code is ok but little optimization is needed.

Coded By: Harish Kumar
Date: 29/09/2021

Input:
N
a3 a1 .. an-1

Output:


*/




// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        map<int,int> m; //map fits but array also be used

        for(int i=0;i<n;i++){
            m[a[i]]++;     //counting frequency of number's appear in array 
        }

        for(int i=0,j=0;i<3;i++){ // replacing array with sorted values
            while(m[i]--)
            a[j++]=i;
        }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends