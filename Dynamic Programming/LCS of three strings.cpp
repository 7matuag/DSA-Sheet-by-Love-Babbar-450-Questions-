int solve(string A, string B, string C, int n1, int n2, int n3, vector<vector<vector<int>>>& memo){
    
    if(n1 == 0 || n2 == 0 || n3 == 0){
        return 0;
    }
    if(memo[n1][n2][n3] != -1){
        return memo[n1][n2][n3];
    }
    if(A[n1 - 1] == B[n2 - 1] && B[n2 - 1] == C[n3 - 1]){
        return memo[n1][n2][n3] = 1 + solve(A, B, C, n1 - 1, n2 - 1, n3 - 1, memo);
    }
    return memo[n1][n2][n3] = max(solve(A, B, C, n1 - 1, n2, n3, memo),
            max(solve(A, B, C, n1, n2 - 1, n3, memo),
            solve(A, B, C, n1, n2, n3 - 1, memo)));
}
int LCSof3 (string A, string B, string C, int n1, int n2, int n3)
{
    // your code here
    vector<vector<vector<int>>> memo(n1 + 1,vector<vector<int>>(n2 + 1, vector<int>(n3 + 1, -1)));
    return solve(A, B, C, n1, n2, n3, memo);
}
