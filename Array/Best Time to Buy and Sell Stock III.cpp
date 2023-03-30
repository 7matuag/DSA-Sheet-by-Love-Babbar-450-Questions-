class Solution {
public:
    int solve(int i, int buy, int k, vector<int>& prices,  vector<vector<vector<int>>>& memo){
        int maxProfit = 0;
        if(memo[i][k][buy] != -1){
            return memo[i][k][buy];
        }
        if(i == prices.size() || k == 2){
            return memo[i][k][buy] = 0;
        }
        if(buy){
            maxProfit = max(maxProfit, prices[i] + solve(i + 1, 0, k + 1, prices, memo));
        }
        else{
            maxProfit = max(maxProfit, -1*prices[i] + solve(i + 1, 1, k, prices, memo));
        }
        return memo[i][k][buy] = max(maxProfit, solve(i + 1, buy, k, prices, memo));
    }
    int maxProfit(vector<int>& prices) {
        vector<vector<vector<int>>> memo(prices.size() + 1, vector<vector<int>>(3, vector<int>(2, -1)));
        return solve(0, 0, 0, prices, memo);
    }
};
