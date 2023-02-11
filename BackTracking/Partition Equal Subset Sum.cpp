//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int solve(int i,int s,int v[],int n){
        if(s==0){
            return 1;
        }
        if(i==n){
            return 0;
        }
        if(v[i]<=s){
            return solve(i+1,s-v[i],v,n) || solve(i+1,s,v,n);
        }
        else{
            return solve(i+1,s,v,n);
        }
    }
    int equalPartition(int n, int arr[])
    {
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        if(sum%2){
            return 0;
        }
        return solve(0,sum/2,arr,n);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends
