class Solution {
public:
	bool isPossible(int N, vector<pair<int, int> >& prerequisites) {
	    // Code here
	    int count = 0;
	    vector<int> indeg(N, 0);
	    vector< vector<int>> adj(N);
	    for (int i = 0; i < prerequisites.size(); i++){
	        indeg[prerequisites[i].first]++;
	        adj[prerequisites[i].second].push_back(prerequisites[i].first);
	    }
	    queue<int> q;
	    for (int i = 0; i < N; i++){
	        if(indeg[i] == 0){
	            q.push(i);   
	        }
	    }
	    while(!q.empty()){
	        int x = q.front();
	        q.pop();
	        for(auto &i : adj[x]){
	            indeg[i]--;
	            if(indeg[i] == 0){
	                q.push(i);
	            }
	        }
	        count++;
	    }
 	    return count == N;
	}
};
