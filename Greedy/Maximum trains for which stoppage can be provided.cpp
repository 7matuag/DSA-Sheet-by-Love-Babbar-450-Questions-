#include <bits/stdc++.h> 
int maxStop(vector<vector<int>> &trains, int n, int m)
{
    // Write your code here
    unordered_map<int, vector<pair<int, int>>> map;
    for(int i = 0; i < n; i++){
      map[trains[i][2]].push_back({trains[i][1], trains[i][0]});
    }
    int ans = 0;
    for (auto &i : map){
        auto x = i.second;
        sort(x.begin(), x.end());
        int count = 1;
        int endTime = x[0].first;
        for(int j = 1; j < x.size(); j++){
            if(endTime <= x[j].second){
                endTime = x[j].first;
                count++;
            }
        } 
        ans += count;
    }
    return ans ;
}
