class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        sort(a.begin(),a.end());
        long long mini=INT_MAX;
        for(long long  i=0;i<=n-m;i++){
            mini=min(mini,abs(a[i+m-1]-a[i]));
        }
        return mini;
    }   
};
