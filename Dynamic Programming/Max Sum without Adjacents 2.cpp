class Solution{
    public:
    int solve(int n, vector<int> &v, int k, vector<vector<int>> &tab){
        if(tab[n][k] != -1){
            return tab[n][k];
        }
        if(n == 0){
            return tab[n][k] = 0;
        }
        if(k != 2){
            return tab[n][k] = max(v[n - 1] + solve(n - 1, v, k + 1, tab), solve(n - 1, v, 0, tab));
        }
        return tab[n][k] = solve(n - 1, v, 0, tab);
    }
    int findMaxSum(vector<int>& a){
        int n = a.size();
        vector<vector<int>> tab(n + 1, vector<int>(3, -1));
        return solve(n, a, 0, tab);
    }
};
