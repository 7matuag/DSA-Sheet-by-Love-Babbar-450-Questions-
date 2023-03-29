#include<bits/stdc++.h>
vector<int> findCommonElements(vector<vector<int>> &mat)
{
    // Write your code here
    int n = mat.size();
    int m = mat[0].size();
    unordered_map<int, int>map;
    for (int i = 0; i < m; i++){
        map[mat[0][i]] = 1;
    }
    for(int i = 1; i < n; i++){
        for(int j = 0; j < m; j++){
            if(map[mat[i][j]] == i){
                map[mat[i][j]]++;
            }
        }
    }
    vector<int> ans;
    for(auto &i : map){
        if(i.second == n){
            ans.push_back(i.first);
        }
    }
    return ans;
}
