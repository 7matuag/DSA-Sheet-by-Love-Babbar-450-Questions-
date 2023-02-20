//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    string solve(int arr[], int n) {
        // code here
        sort(arr,arr+n);
        int s=0,c=0;
        string ans="";
        for(int i=n-1;i>=0;i-=2){
            s=arr[i];
            if(i-1>=0){
                s+=arr[i-1];
            }
            if(!s && !c){
                return ans;
            }
            ans=to_string((s+c)%10)+ans;
            c=(s+c)/10;
        }
        if(c){
            ans=to_string(c)+ans;
        }
        
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
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.solve(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
