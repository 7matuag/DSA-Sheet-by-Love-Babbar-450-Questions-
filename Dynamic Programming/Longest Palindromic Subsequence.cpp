class Solution{
  public:
    int solve(int i, int j, string a, string b, vector<vector<int>>& memo){
        if(i == 0 || j == 0){
            return 0;
        }
        if(memo[i][j] != -1){
            return memo[i][j];
        }
        if(a[i - 1] == b[j - 1]){
            return memo[i][j] = 1 + solve(i - 1, j - 1, a, b, memo);
        }
        return memo[i][j] = max(solve(i - 1, j, a, b, memo), solve(i, j - 1, a, b, memo));
    }
    int longestPalinSubseq(string s) {
        //code here
        int n = s.size();
        string str = s;
        reverse(str.begin(), str.end());
        vector<vector<int>> memo(n + 1, vector<int>(n + 1, -1));
        return solve(n, n, s, str, memo);
    }
};
