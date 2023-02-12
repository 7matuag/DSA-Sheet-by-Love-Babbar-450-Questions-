//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&s,vector<int>&e,int n)
	{
	    // Code here
	    if(s==e){
	        return 0;
	    }
	    s[0]-=1;
	    s[1]-=1;
	    e[0]-=1;
	    e[1]-=1;
	    queue<pair<pair<int,int>,int>>q;
	    vector<vector<bool>>vis(n,vector<bool>(n,0));
	    q.push({{s[0],s[1]},0});
	    vis[s[0]][s[1]]=1;
	    while(!q.empty()){
	        auto x=q.front();
	        q.pop();
	        int i=x.first.first;
	        int j=x.first.second;
	        int d=x.second;
	        if(i==e[0] && j==e[1]){
	            return d;
	        }
	        if(i+2<n && j+1<n && !vis[i+2][j+1]){
	            vis[i+2][j+1]=1;
	            q.push({{i+2,j+1},d+1});
	        }
	        if(i+1<n && j+2<n && !vis[i+1][j+2]){
	            vis[i+1][j+2]=1;
	            q.push({{i+1,j+2},d+1});
	        }
	        if(i-2>=0 && j-1>=0 && !vis[i-2][j-1]){
	            vis[i-2][j-1]=1;
	            q.push({{i-2,j-1},d+1});
	        }
	        if(i-1>=0 && j-2>=0 && !vis[i-1][j-2]){
	            vis[i-1][j-2]=1;
	            q.push({{i-1,j-2},d+1});
	        }
	        if(i+2<n && j-1>=0 && !vis[i+2][j-1]){
	            vis[i+2][j-1]=1;
	            q.push({{i+2,j-1},d+1});
	        }
	        if(i+1<n && j-2>=0 && !vis[i+1][j-2]){
	            vis[i+1][j-2]=1;
	            q.push({{i+1,j-2},d+1});
	        }
	        if(i-2>=0 && j+1<n && !vis[i-2][j+1]){
	            vis[i-2][j+1]=1;
	            q.push({{i-2,j+1},d+1});
	        }
	        if(i-1>=0 && j+2<n && !vis[i-1][j+2]){
	            vis[i-1][j+2]=1;
	            q.push({{i-1,j+2},d+1});
	        }
	    }
	    return -1;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
