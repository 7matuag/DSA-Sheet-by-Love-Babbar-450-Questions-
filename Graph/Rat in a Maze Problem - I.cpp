//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void solve(int i,int j,int n,vector<vector<int>> &m,string s,vector<string>&ans){
        if(i==n-1 && j==n-1){
            ans.push_back(s);
            return ;
        }
        m[i][j]=0;
        if(i+1<n && m[i+1][j]==1){
            solve(i+1,j,n,m,s+'D',ans);
        }
        if(j-1>=0 && m[i][j-1]==1){
            solve(i,j-1,n,m,s+'L',ans);
        }
        if(j+1<n && m[i][j+1]==1){
            solve(i,j+1,n,m,s+'R',ans);
        }
        if(i-1>=0 && m[i-1][j]==1){
            solve(i-1,j,n,m,s+'U',ans);
        }
        m[i][j]=1;
        return ;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>ans;
        if(m[0][0]==0 || m[n-1][n-1]==0){
            return ans;
        }
        solve(0,0,n,m,"",ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
