
pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long, long long> ans={INT_MAX,INT_MIN};
    for(int i=0;i<n;i++){
        ans.first=min(ans.first,a[i]);
        ans.second=max(ans.second,a[i]);
    }
    return ans;
}
