/*

Find the Union and Intersection of the two sorted arrays.

INPUT:
1
4 3
1 2 3 4
2 3 6

OUTPUT:
5
2

*/



// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        unordered_set<int> s;
        
        for(int i=0;i<n;i++ ){
            s.insert(a[i]);
        }
        
        for(int i=0;i<m;i++ ){
            s.insert(b[i]);
        }
        
        return s.size();
         
    }

    int calc_intersection(int a[], int n, map<int,int> &m){

        int count=0;

        for(int i=0;i<n;i++ ){
            if(m[a[i]]==2) count++;
        }

        return count;

    }

    int doIntersection(int a[], int n, int b[], int m){
        
        map<int,int> c;

        for(int i=0;i<n;i++ ){
            c[a[i]] +=1;
        }
        
        for(int i=0;i<m;i++ ){
            c[b[i]] +=1;
        }
        
        if(n>m) return calc_intersection(a,n, c);
        else return calc_intersection(b,m,c);
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
        cout << ob.doIntersection(a, n, b, m) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends