class Solution
{
    public:
    //Function to find the nth catalan number.
    cpp_int solve(int n,vector<cpp_int>&memo){
        if(memo[n]!=-1){
            return memo[n];
        }
        if(n<=1){
            return memo[n]=1;
        }
        cpp_int res=0;
        for(int i=0;i<n;i++){
            res+=solve(i,memo)*solve(n-i-1,memo);
        }
        return memo[n]=res;
    } 
    cpp_int findCatalan(int n) 
    {
        vector<cpp_int>memo(n+1,-1);
        return solve(n,memo);
    }
};
