//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    int f=-1,l=-1;
    int i=0,j=n-1;
    while(j>=i){
        int m=(j-i)/2+i;
        if(arr[m]==x){
            f=m;
            j=m-1;
        }
        else if(x>arr[m]){
            i=m+1;
        }
        else{
            j=m-1;  
        }
    }
    if(f==-1){
        return {-1,-1};
    }
    i=f,j=n-1;
    while(j>=i){
        int m=(j-i)/2+i;
        if(arr[m]==x){
            l=m;
            i=m+1;
        }
        else if(x>arr[m]){
            i=m+1;
        }
        else{
            j=m-1;  
        }
    }
    return {f,l};
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends
