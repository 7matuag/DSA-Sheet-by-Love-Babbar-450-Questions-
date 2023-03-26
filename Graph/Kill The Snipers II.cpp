#include <bits/stdc++.h> 
vector<int> minTime(int n, int m, vector<vector<int>> &edges)
{
    // Write your code here
    vector<int> ans(n);
    vector<int> indeg(n, 0);
    vector< vector<int>> adj(n);
    for (int i = 0; i < edges.size(); i++){
        indeg[edges[i][1]]++;
        adj[edges[i][0]].push_back(edges[i][1]);
    }
    queue<int> q;
    for (int i = 0; i < n; i++){
        if(indeg[i] == 0){
            q.push(i);   
        }
    }
    int count = 1;
    while(!q.empty()){
        int size = q.size();
        for(int i = 0; i < size ; i++){
            int x = q.front();
            q.pop();
            for(auto &j : adj[x]){
                indeg[j]--;
                if(indeg[j] == 0){
                    q.push(j);
                }
            }
            ans[x] = count;
        }
        count++;
    }
    return ans;
}
