//{ Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    
    int lcs(int x, int y, string s1, string s2)
    {
        vector<vector<int>>tab(x+1,vector<int>(y+1,-1));
        for(int i=0;i<=x;i++){
            tab[i][0]=0;
        }
        for(int j=0;j<=y;j++){
            tab[0][j]=0;
        }
        for(int i=1;i<=x;i++){
            for(int j=1;j<=y;j++){
                if(s1[i-1]==s2[j-1]){
                    tab[i][j]=1+tab[i-1][j-1];
                }
                else{
                    tab[i][j]=max(tab[i-1][j],max(tab[i][j-1],tab[i-1][j-1]));
                }
            }
        }
        return tab[x][y];
    }
};


//{ Driver Code Starts.
int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}

// } Driver Code Ends
