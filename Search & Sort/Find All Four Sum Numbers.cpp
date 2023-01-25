// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &nums, int target) {
       vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i-1]==nums[i]){
                continue;
            }
            bool f=0;
            for(int j=i+1;j<nums.size();j++){
                if(j>i+1 && nums[j-1]==nums[j]){
                    continue;
                }
                int k=j+1,l=nums.size()-1;
                while(l>k){
                    if((long long int)nums[i]+nums[j]+nums[k]+nums[l]==target){
                        ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                        int a=nums[k],b=nums[l];
                        while(k<l && a==nums[k]){
                            k++;
                        }
                        while(l>k && b==nums[l]){
                            l--;
                        }
                    }
                    else if((long long int)nums[i]+nums[j]+nums[k]+nums[l]>target){
                        l--;
                    }
                    else{
                        k++;
                    }
                }
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends
