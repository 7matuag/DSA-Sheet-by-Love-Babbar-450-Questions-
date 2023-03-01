int longestSubsequence(int N, int A[])
    {
        int ans=1;
        vector<int>tab(N,1);
        for(int i=1;i<N;i++){
            for(int j=0;j<i;j++){
                if(abs(A[j]-A[i])==1){
                    tab[i]=max(1+tab[j],tab[i]);
                }
            }
            ans=max(ans,tab[i]);
        }
        return ans;
    }
