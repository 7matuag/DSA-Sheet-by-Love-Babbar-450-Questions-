//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int solve(int n,vector<int>&v){
        if(n==0){
            return 0;
        }
        int k=log2(n);
        int p=pow(2,k);
        return n-p+1+v[k-1]+solve(n^p,v);
    }
    int countSetBits(int n){
        int k=log2(n)+1;
        vector<int>v(k+1,0);
        v[0]=1;
        for(int i=1;i<=k;i++){
            v[i]=v[i-1]*2+pow(2,i);
        }
        return solve(n,v);
    }
};


//{ Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}

// } Driver Code Ends
