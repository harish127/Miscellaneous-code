/*

Move all negative numbers to beginning and positive to end with constant extra space

Coded By: Harish Kumar
Date: 30/09/2021

Input:
N
a1 a2 .. an


Output:
-ve numbers and posituve numbers


*/


#include<iostream>
#include<vector>
using namespace std;

//Helper Swap function
void swap(int *c1, int *c2 ){
    int  temp = (*c1);
    *c1 = (*c2);
    (*c2) = temp;
}

//funtion to separated neagtive number from positive number using two pointer approach 
void negative_sep(vector<int> &arr){

    int i=0,j=arr.size()-1; //setting up two variables

    while(i<=j){  
        if(arr[i]>0){  // if pointer1 >0 then check for pointer 2<0 both true then  swap  
            if(arr[j]<=0){
                swap(arr[i],arr[j]);
            }
            else j--;     //else increment or decremnet respective pointers
        }else i++;

    }
}
//main function
int main(){
    int n;
    cin>>n;
    vector<int> v(n,0);
    //storing all input in vector
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    //calling of function
    negative_sep(v);

    //displaying the changed vector
    for(auto a : v) cout<<a<<" ";
}