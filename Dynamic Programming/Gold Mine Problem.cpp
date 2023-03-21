class Solution{
public:
    int maxGold(int n, int m, vector<vector<int>> mat)
    {
        // code here
        vector<vector<int>> tab(n, vector<int>(m));
        for(int i = 0; i < n;i++){
            tab[i][0] = mat[i][0];
        }
        for(int j = 1; j < m; j++){
            for(int i = 0; i < n; i++){
                if(i - 1 >= 0 && i + 1 < n){
                    tab[i][j] = mat[i][j] + max(tab[i - 1][j - 1] ,max(tab[i][j - 1],tab[i + 1][j - 1]));
                }
                else if(i - 1 >= 0){
                    tab[i][j] = mat[i][j] + max(tab[i - 1][j - 1], tab[i][j - 1]);
                }
                else if(i + 1 < n){
                    tab[i][j] = mat[i][j] + max(tab[i + 1][j - 1], tab[i][j - 1]);
                }
                else{
                    tab[i][j] = mat[i][j] + tab[i][j - 1];
                }
            }
        }
        int ans = INT_MIN;
        for(int i = 0; i < n;i++){
            ans = max(ans, tab[i][m-1]);
        }
        return ans;
    }
};
