//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    
    int editDistance(string s, string t) {
        // Code here
        if(s==t){
            return 0;
        }
        int n=s.size(),m=t.size();
        vector<vector<int>>tab(n+1,vector<int>(m+1));
        for(int i=0;i<=n;i++){
            tab[i][0]=i;
        }
        for(int j=0;j<=m;j++){
            tab[0][j]=j;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i-1]==t[j-1]){
                    tab[i][j]=tab[i-1][j-1];
                }
                else{
                    tab[i][j]=1+min(tab[i-1][j],min(tab[i-1][j-1],tab[i][j-1]));
                }
            }
        }
        return tab[n][m];
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
