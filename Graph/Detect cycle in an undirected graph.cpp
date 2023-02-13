//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool dfs(int i,int parent,vector<int> adj[],vector<bool>&vis,vector<bool>&chk){
        vis[i]=1;
        chk[i]=1;
        for(auto &j:adj[i]){
            if(chk[j] && j!=parent){
                return 1;
            }
            if(!vis[j]){
                if(dfs(j,i,adj,vis,chk)){
                    return 1;
                }
            }
        }
        return 0;
    }
    bool isCycle(int v, vector<int> adj[]) {
        // Code here
        vector<bool>vis(v,0);
        for(int i=0;i<v;i++){
            if(!vis[i]){
                vector<bool>chk(v,0);
                if(dfs(i,-1,adj,vis,chk)){
                    return 1;
                }
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends
