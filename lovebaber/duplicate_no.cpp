/*

Find the Duplicate Number

Coded By: Harish Kumar
Date: 14/12/2021

Passed on one blow

Input: nums = [1,3,4,2,2]
Output: 2

*/

#include<iostream>
#include<vector>

using namespace std;

int findDuplicate(vector<int>& nums) {
    vector<int> no(nums.size(),0);
    for(auto a : nums){
        no[a-1]++;
    }
    for(int i=0;i<no.size();i++){
        if(no[i]>=2) return i+1;
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
    
    int res = findDuplicate(arr);
    cout<<res;

}