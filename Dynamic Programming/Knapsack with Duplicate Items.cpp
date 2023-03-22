class Solution{
public:
    int solve(int n, int w, int val[], int wt[], vector<vector<int>>& memo){
        if(memo[n][w] != -1){
            return memo[n][w];
        }
        if(n <= 0){
            return memo[n][w] = 0;
        }
        if(wt[n - 1] <= w){
            return memo[n][w] = max(val[n - 1] + solve(n, w - wt[n - 1], val, wt, memo), solve(n - 1, w, val, wt, memo)); 
        }
        return memo[n][w] = solve(n - 1, w, val, wt, memo);
    }
    int knapSack(int n, int w, int val[], int wt[])
    {
        // code here
        vector<vector<int>> memo(n + 1, vector<int>(w + 1, -1));
        return solve(n, w, val, wt, memo);
    }
};
