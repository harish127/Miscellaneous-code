/*
reverse array

Coded By: Harish Kumar
Date: 26/9/2021

INPUT:
N
a1 a2... an

OUTPUT:
an an-1 ... a2 a1 

*/

#include<iostream>
#include<vector>
using namespace std;

void swap(int *c1, int *c2 ){
    int  temp = (*c1);
    *c1 = (*c2);
    (*c2) = temp;
}

void revArr(vector<int> &arr){
      for(int i=0, j=arr.size()-1;i<j;i++,j--){
        //little optimization
        if(arr[i] != arr[j]) 
      swap(&arr[i],&arr[j]);
  }
}

int main(){
    vector<int> v ;
    int n;
    cin>>n;
    while(n--) {
        int temp;
        v.push_back(temp);
    }

    revArr(v);

    for(auto a:v) cout<<a<<" ";

}
