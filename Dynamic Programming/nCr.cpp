class Solution{
public:
    long long int mod=1e9+7;
    int nCr(int n, int r){
        // code here
        if(r>n){
            return 0;
        }
        vector<vector<long long int>>tab(n+1,vector<long long int>(r+1));
        for(int i=0;i<=n;i++){
            for(int j=0;j<=r;j++){
                if(j>i){
                    tab[i][j]=0;
                }
                else if(i==j || i==0 || j==0){
                    tab[i][j]=1;
                }
                else{
                    tab[i][j]=(tab[i-1][j]+tab[i-1][j-1])%mod;
                }
            }
        }
        return tab[n][r]%mod;
    }
};
