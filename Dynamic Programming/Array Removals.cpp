class Solution{
    public:
    int removals(vector<int>& arr, int k){
        //Code here
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int s = 0, e = 0;
        int maxlen = 0;
        while(e < n){
            if(arr[e] - arr[s] <= k){
                maxlen = max(maxlen, e - s + 1);
                e++;
            }
            else{
                s++;
            }
        }
        return n - maxlen;
    }
};
