//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        queue<pair<int,int>>q;
        int n=grid.size(),m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    grid[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        int ans=0;
        while(!q.empty()){
            int s=q.size();
            while(s--){
                auto x=q.front();
                q.pop();
                int i=x.first,j=x.second;
                if(i-1>=0 && grid[i-1][j]==1){
                    grid[i-1][j]=0;
                    q.push({i-1,j});
                }
                if(i+1<n && grid[i+1][j]==1){
                    grid[i+1][j]=0;
                    q.push({i+1,j});
                }
                if(j-1>=0 && grid[i][j-1]==1){
                    grid[i][j-1]=0;
                    q.push({i,j-1});
                }
                if(j+1<m && grid[i][j+1]==1){
                    grid[i][j+1]=0;
                    q.push({i,j+1});
                }
            }
            ans++;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    return -1;
                }
            }
        }
        return ans-1;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
