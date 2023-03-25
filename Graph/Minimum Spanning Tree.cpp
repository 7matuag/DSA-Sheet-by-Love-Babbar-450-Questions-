class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        int ans = 0;
        vector<bool> vis(V, 0);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, 0});
        while(!pq.empty()){
            auto x = pq.top();
            pq.pop();
            int f = x.first; 
            int s = x.second;
            if(!vis[s]){
                vis[s] = 1;
                ans += f; 
                for(auto &j : adj[s]){
                    if(!vis[j[0]]){
                        pq.push({j[1], j[0]});
                    }
                }
            }
        }
        return ans;
    }
};
