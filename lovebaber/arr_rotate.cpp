/*

Cyclically rotate an array by one.


Coded By: Harish Kumar
Date: 8/10/2021

Input:
T = 1
N = 5
A[] = {1, 2, 3, 4, 5}

Output:
5 1 2 3 4

*/



// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n);

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n] , i;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
        return 0;
}
// } Driver Code Ends


//User function Template for C++

void rotate(int arr[], int n)
{
    for(int i=1;i<n;i++){
        int temp=arr[0];
        arr[0]=arr[i];
        arr[i]=temp;
        }
}