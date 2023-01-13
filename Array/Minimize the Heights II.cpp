//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int a[], int n, int k) {
        // code here
        int lmax=0, rmax=0, lmin=INT_MAX, rmin=INT_MAX;
        sort(a, a+n);
        int ans = a[n-1]-a[0];
        int x = 0;
        while(a[x]<k) x++;
        x--;
        x = max(0,x);
        for(int i=x; i<n-1; i++)
        {
            lmax = a[i]+k;
            rmax = a[n-1]-k;
            lmin = a[0]+k;
            rmin = a[i+1]-k;
            int mx = max(lmax,rmax);
            int mn = min(lmin,rmin);
            ans = min(mx-mn, ans);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
