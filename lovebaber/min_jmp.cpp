/*

Minimum number of jumps

Done code not tested on platform

Coded By: Harish Kumar
Date: 11/12/2021

Input:
N = 11 
arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9} 
Output: 3 

*/

#include<iostream>
#include<vector>

using namespace std;

int minJumps(int n,vector<int> arr){
    int noOfJumps=0;
    for(int i=arr[0];i<=n;i+=arr[i]){
        noOfJumps++;
        if(arr[i]==0) return -1;
    }
    return noOfJumps;
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