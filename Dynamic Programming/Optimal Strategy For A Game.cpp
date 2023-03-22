class Solution{
    public:
    long long solve(int i, int j, int arr[], vector<vector<long long >>& memo){
        if(i>j){
            return 0;
        }
        if(memo[i][j] != -1){
            return memo[i][j];
        }
        long long first = arr[i] + min(solve(i + 2, j, arr, memo),solve(i + 1, j - 1, arr, memo));
        long long last = arr[j] + min(solve(i , j - 2, arr, memo),solve(i + 1, j - 1, arr, memo));
        return memo[i][j] = max(first, last);
    }
    long long maximumAmount(int arr[], int n){
        // Your code here
        vector<vector<long long >> memo(n + 1, vector<long long>(n + 1, -1));
        return solve(0, n - 1, arr, memo);
    }
};
