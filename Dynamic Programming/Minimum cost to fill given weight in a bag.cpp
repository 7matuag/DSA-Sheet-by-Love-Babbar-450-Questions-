class Solution{
	public:
	long long solve(int i, int n, int w, int cost[], vector<vector<int>>&memo){
	    if(memo[i][w] != -1){
	        return memo[i][w];
	    }
	    if(i == n){
	        if(w == 0){
	            return memo[i][w] = 0;
	        }
	        return memo[i][w] = INT_MAX;
	    }
	    if(w >= i+1 && cost[i] != -1){
	        return memo[i][w] = min(cost[i] + solve(i, n, w-i-1, cost, memo), solve(i+1, n, w, cost, memo)); 
	    }
        return memo[i][w] = solve(i+1, n, w, cost, memo);
	}
	int minimumCost(int cost[], int N, int W) 
	{ 
        // Your code goes here
        vector<vector<int>>memo(N+1,vector<int>(W+1,-1));
        long long k = solve(0, N, W, cost, memo);
        if(k >= INT_MAX){
            return -1;
        }
        return k;
	} 
};
