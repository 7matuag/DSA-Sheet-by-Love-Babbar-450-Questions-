class Solution{
    public:
    vector<int> findLeastGreater(vector<int>& arr, int n) {
        vector<int> ans;
        set<int>s;
        for (int i = n - 1; i >= 0; i--){
            auto itr = s.upper_bound(arr[i]);
            if(itr == s.end()){
                ans.push_back(-1);
            }
            else{
                ans.push_back(*itr);
            }
            s.insert(arr[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
