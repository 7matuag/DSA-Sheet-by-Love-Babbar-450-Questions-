class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        vector<int> ans(V, INT_MAX);
        ans[S] = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0 ,S});
        while(!pq.empty()){
            auto x = pq.top();
            pq.pop();
            int minDist = x.first;
            int node = x.second;
            for(auto &i : adj[node]){
                if(ans[i[0]] > ans[node] + i[1]){
                    ans[i[0]] = ans[node] + i[1];
                    pq.push({i[1], i[0]});
                }
            }
        }
        return ans;
    }
};
