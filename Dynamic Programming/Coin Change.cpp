//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
     
    long long int count(int coins[], int n, int sum) {

        // code here.
        vector<vector<long long int>>tab(n+1,vector<long long int>(sum+1));
        for(int i=0;i<sum;i++){
            tab[0][i]=0;
        }
        for(int i=0;i<n;i++){
            tab[i][0]=1;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                if(j>=coins[i-1]){
                    tab[i][j]=tab[i][j-coins[i-1]]+tab[i-1][j];
                }
                else{
                    tab[i][j]=tab[i-1][j];
                }
            }
        }
        return tab[n][sum];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends
