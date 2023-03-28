class Solution {
  public:
    int solve(int i, int k, int buy, int n, int prices[], vector<vector<vector<int>>>& memo){
        if(memo[i][k][buy] != -1){
            return memo[i][k][buy];
        }
        if(i == n || k == 0){
            return memo[i][k][buy] = 0;
        }
        int maxProfit = 0;
        if(buy){
            maxProfit = max(maxProfit, prices[i] + solve(i + 1, k - 1, 0, n, prices, memo));
            maxProfit = max(maxProfit, solve(i + 1, k, 1, n, prices, memo));
        }
        else{
            maxProfit = max(maxProfit, -1 * prices[i] + solve(i + 1, k, 1, n, prices, memo));
            maxProfit = max(maxProfit, solve(i + 1, k, 0, n, prices, memo));
        }
        return memo[i][k][buy] = maxProfit;
    }
    int maxProfit(int K, int N, int A[]) {
        // code here
        vector<vector<vector<int>>> memo(N + 1, vector<vector<int>>(K + 1, vector<int>(2 ,-1)));
        return solve(0, K, 0, N, A, memo);
    }
};
