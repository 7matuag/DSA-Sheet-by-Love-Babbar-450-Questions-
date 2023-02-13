//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool dfs(int i,vector<int> adj[],vector<bool>&vis,vector<bool>&chk){
        vis[i]=1;
        chk[i]=1;
        for(auto &j:adj[i]){
            if(chk[j]){
                return 1;
            }
            if(!vis[j]){
                if(dfs(j,adj,vis,chk)){
                    return 1;
                }
            }
        }
        chk[i]=0;
        return 0;
    }
    bool isCyclic(int v, vector<int> adj[]) {
        // code here
        vector<bool>vis(v,0);
        for(int i=0;i<v;i++){
            if(!vis[i]){
                vector<bool>chk(v,0);
                if(dfs(i,adj,vis,chk)){
                    return 1;
                }
            }
        }
        return 0;
        
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends
