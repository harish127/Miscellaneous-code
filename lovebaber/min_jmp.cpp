/*

Minimum number of jumps

My code not pass testcase so i saw solution but it shows TLE finally i saw good solution here it is 
Coded By: Harish Kumar
Date: 11/12/2021

Input:
N = 11 
arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9} 
Output: 3 

*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int minJumps(int n,vector<int> arr){
 
 if(n <= 1) 
 return 0;
 if(arr[0] == 0) 
 return -1;

 int maxreach = arr[0];

 int step = arr[0];

 int jump =1;
 int i=1;
 for(i=1;i<n;i++){
     if(i==n-1)
     return jump;
     maxreach = max(maxreach,i+arr[i]);
     step--;
     if(step ==0){
         jump ++;
         if(i>=maxreach)
         return -1;

         step=maxreach-i;;
     }
 }
 return -1;
}

int main(){
    int N;
    cin>>N;
    vector<int> arr(N,0);
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    
    int res = minJumps(N, arr);
    cout<<res;

}