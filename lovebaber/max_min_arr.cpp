/*

Maximum and minimum of an array using minimum number of comparisons

Coded by: Harish Kumar
Date: 27/09/2021

INPUT
N
a1 a2 ... an

where N is total no of elements in an array and a of ith  starting from 0 to n-1 for 0 indexed array.

OUTPUT
Z X

where Z is maximum and X is minimum element in array.

*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//function for returning minimum and maximum element in array
pair<int , int> max_min(vector<int> &v){
    
    if(v.size()==1){
        return make_pair(v[0],v[0]);
    }
    int maxElem=-9999, minElem=9999;
    //O(n) approach
    for(int i=0;i<v.size();i++){
        if(v[i]>maxElem) maxElem=v[i];
        if(v[i]<minElem) minElem=v[i];
    }

    // //O(logn) approach
    // sort(v.begin(),v.end());
    // return make_pair(v[0],v[v.size()-1]);

    return make_pair(maxElem,minElem);
}


int main(){
    int n;
    cin>>n;
    vector<int> v(n,0);

    //Inputing the Values to array
    for(int i=0;i<v.size();i++)
        cin>>v[i];
    
    //solution goes here
    pair<int , int> sol = max_min(v);
    
    // MAX then MIN
    cout<<sol.first<<" "<<sol.second;
    
}