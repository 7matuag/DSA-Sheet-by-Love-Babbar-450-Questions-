// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int n, int k)
    {
        // Write Your Code here
        int mini=0,maxi=0;
        sort(candies,candies+n);
        int i=0,j=n-1;
        while(j>=i){
            mini+=candies[i];
            i++;
            j-=k;
        }
        reverse(candies,candies+n);
        i=0,j=n-1;
        while(j>=i){
            maxi+=candies[i];
            i++;
            j-=k;
        }
        return {mini,maxi};
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}  // } Driver Code Ends
