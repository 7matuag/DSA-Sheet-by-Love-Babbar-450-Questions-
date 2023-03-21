class Solution{
public:
    int maximumPath(int n, vector<vector<int>> m)
    {
        // code here
        vector<vector<int>> tab(n ,vector<int>(n));
        for(int i = 0; i < n; i++){
            tab[0][i] = m[0][i];
        }
        for(int i = 1; i < n; i++){
            for(int j = 0; j < n; j++){
                if(j - 1 >= 0 && j + 1 < n){
                    tab[i][j] = m[i][j] + max(tab[i - 1][j - 1], max(tab[i - 1][j], tab[i - 1][j + 1]));
                }
                else if(j - 1 >= 0){
                    tab[i][j] = m[i][j] + max(tab[i - 1][j - 1], tab[i - 1][j]);
                }
                else if(j + 1 < n){
                    tab[i][j] = m[i][j] + max(tab[i - 1][j], tab[i - 1][j + 1]);
                }
                else{
                    tab[i][j] = m[i][j] + tab[i - 1][j];
                }
            }
        }
        int ans = INT_MIN;
        for(int i = 0; i < n; i++){
            ans = max(ans, tab[n - 1][i]);
        }
        return ans;
    }
};
