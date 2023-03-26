class Solution {
public:
	int isNegativeWeightCycle(int n, vector<vector<int>>edges){
	    // Code here
	    if(edges.size() == 0){
	        return 0;
	    }
	    vector<int> dist(n, INT_MAX);
	    dist[edges[0][0]] = 0;
	    for(int i = 0; i < n; i++){
	        for (int j = 0; j < edges.size(); j++){
	            int src = edges[j][0];
	            int des = edges[j][1];
	            int wgt = edges[j][2];
	            if(dist[src] != INT_MAX && dist[des] > dist[src] + wgt){
	                dist[des] = dist[src] + wgt;
	                if(i == n - 1){
	                    return 1;
	                }
	            }
	        }
	    }
	    return 0;
	}
};
