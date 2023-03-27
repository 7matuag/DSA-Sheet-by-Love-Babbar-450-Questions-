class Solution {
public:
    int buyMaximumProducts(int n, int k, int price[]){
        //Write your code here
        vector<pair<int, int>>v;
        for (int i = 0; i < n; i++){
            v.push_back({price[i], i + 1});
        }
        int ans = 0;
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++){
            if(k < v[i].first){
                break;
            }
            int f = v[i].first;
            int s = v[i].second;
            while(k < s * f){
                s--;
            }
            ans += s;
            k -= f * s;
        }
        return ans;
    }
};
