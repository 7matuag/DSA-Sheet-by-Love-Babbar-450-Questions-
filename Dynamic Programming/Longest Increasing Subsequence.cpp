

class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int solve(int a[],int n,int x,vector<vector<int>>&memo){
        if(memo[n][x+1]!=-1){
            return memo[n][x+1];
        }
        if(n==0){
            return memo[n][x+1]=0;
        }
        if(x==-1 || a[n-1]<a[x]){
            return memo[n][x+1]=max(1+solve(a,n-1,n-1,memo),solve(a,n-1,x,memo));
        }
        return memo[n][x+1]=solve(a,n-1,x,memo);
    }
    int longestSubsequence(int n, int a[])
    {
       // your code here
       if(n==1){
           return 1;
       }
       vector<vector<int>>memo(n+1,vector<int>(n+1,-1));
       return solve(a,n,-1,memo);
    }
};
