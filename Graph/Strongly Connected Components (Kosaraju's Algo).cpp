class Solution
{
	public:
	//Function to find number of strongly connected components in the graph.
    void toposort(int i, vector<bool>& vis, vector<vector<int>>& adj, stack<int>& s){
        vis[i] = 1;
        for (auto &j : adj[i]){
            if(!vis[j]){
                toposort(j, vis, adj, s);
            }
        }
        s.push(i);
    }
    void dfs(int i, vector<vector<int>>& adjMat, vector<bool>& vis){
        vis[i] = 1;
        for (auto &j : adjMat[i]){
            if(!vis[j]){
                dfs(j, adjMat, vis);
            }
        }
        return ;
    }
    int kosaraju(int V, vector<vector<int>>& adj)
    {
        //code here
        stack<int> s;
        vector<bool> vis(V, 0);
        for (int i = 0; i < V; i++){
            if(!vis[i]){
                toposort(i, vis, adj, s);
            }
        }
        vector<vector<int>> adjMat(V);
        for (int i = 0; i < V; i++){
            for (auto &j : adj[i]){
                adjMat[j].push_back(i);
            }
        }
        for (int i = 0; i < V; i++){
            vis[i] = 0;
        }
        int count = 0; 
        while(!s.empty()){
            int i = s.top();
            s.pop();
            if(!vis[i]){
                dfs(i, adjMat, vis);
                count++;
            }
        }
        return count;
    }
};
