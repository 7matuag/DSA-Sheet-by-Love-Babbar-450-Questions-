//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    long long int findMaxProduct(vector<int>&a, int n){
        //Write your code here 
        if(n==1){
            return a[0];
        }
        long long int mod=1e9+7;
        int cnt=0,cntz=0;
        long long int pro=1;
        for(int i=0;i<n;i++){
            if(a[i]!=0){
                pro=(pro%mod)*a[i];
                pro=pro%mod;
            }
            else{
                cntz++;
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]<0){
                cnt++;
            }
        }
        if((cnt==1 && cnt+cntz==n) || cntz==n){
            return 0;
        }
        if(cnt%2){
            int maxi=INT_MIN;
            for(int i=0;i<n;i++){
                if(a[i]<0){
                    maxi=max(maxi,a[i]);
                }
            }
            pro/=maxi;
        }
        return pro%mod;
    }
};



//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<int>arr(n);
	    for(int i = 0 ; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    long long int ans = ob.findMaxProduct(arr, n);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends
