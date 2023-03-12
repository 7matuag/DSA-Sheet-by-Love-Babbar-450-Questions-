class Solution {
public:
    void dfs(int i,vector<bool>&vis,vector<vector<int>>&adj){
        vis[i]=1;
        for(auto &j:adj[i]){
            if(!vis[j]){
                dfs(j,vis,adj);
            }
        }
        return ;
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1){
            return -1;
        }
        vector<vector<int>>adj(n);
        for(int i=0;i<connections.size();i++){
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(connections[i][0]);
        }
        int count=-1;
        vector<bool>vis(n,0);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i,vis,adj);
                count++;
            }
        }
        return count;
    }
};
