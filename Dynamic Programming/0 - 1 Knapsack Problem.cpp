//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int solve(int w, int wt[], int val[], int n,vector<vector<int>>&memo){
        if(memo[w][n]!=-1){
            return memo[w][n];
        }
        if(!w || !n){
            return memo[w][n]=0;
        }
        if(wt[n-1]<=w){
            return memo[w][n]=max(val[n-1]+solve(w-wt[n-1],wt,val,n-1,memo),solve(w,wt,val,n-1,memo));
        }
        return memo[w][n]=solve(w,wt,val,n-1,memo);
    }
    int knapSack(int w, int wt[], int val[], int n) 
    {
        vector<vector<int>>memo(w+1,vector<int>(n+1,-1));
        return solve(w,wt,val,n,memo);
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends
