class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int> indeg(V);
	    for(int i = 0; i < V; i++){
	        for(int j = 0; j < adj[i].size(); j++){
	            indeg[adj[i][j]]++;
	        }
	    }
	    vector<int> ans;
	    queue<int> q;
	    for(int i = 0; i < V; i++){
	        if(indeg[i] == 0){
	            q.push(i);
	        }
	    }
	    while(!q.empty()){
	        int x = q.front();
	        q.pop();
	        ans.push_back(x);
	        for(auto &j : adj[x]){
	            indeg[j]--;
	            if(indeg[j] == 0){
	                q.push(j);
	            }
	        }
	    }
	    return ans;
	}
};
