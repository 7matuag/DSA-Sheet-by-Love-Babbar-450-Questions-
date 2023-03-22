class Solution {
  public:
    long long int countBT(int h) { 
        // code here
        if(h == 1){
            return 1;
        }
        long long mod = 1e9 + 7;
        vector<long long> tab(h + 1);
        tab[0] = 1, tab[1] = 1;
        for(int i = 2; i <= h; i++){
            tab[i] = ((tab[i - 1] * tab[i - 1]) % mod + (2 * tab[i - 2] * tab[i - 1]) % mod) % mod;
        }
        return tab[h];
    }
};
