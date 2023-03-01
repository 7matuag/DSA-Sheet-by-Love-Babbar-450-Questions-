class Solution {
public:
    static bool cmp(vector<int>&a,vector<int>&b){
        if(a[1]==b[1]){
            return a[0]<b[0];
        }
        return a[1]<b[1];
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        int n=pairs.size();
        sort(pairs.begin(),pairs.end(),cmp);
        int ans=1;
        int prev=pairs[0][1];
        for(int i=1;i<n;i++){
            cout<<"["<<pairs[i][0]<<","<<pairs[i][1]<<"]"<<" ";
            if(prev<pairs[i][0]){
                ans++;
                prev=pairs[i][1];
            }
        }
        return ans;
    }
};
