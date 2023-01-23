//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long int maximizeSum(long long int a[], int n, int k)
    {
        // Your code goes here
        sort(a,a+n);
        int cnt=0;
        long long int ans=0;
        for(int i=0;i<n;i++){
            if(a[i]<0){
                cnt++;
            }
        }
        int i=0;
        while(i<k){
            if(i<cnt){
                a[i]*=-1;
            }
            else{
               if(a[i-1]<a[i] && (k-i)%2){
                   a[i-1]*=-1;
               }
               else if((k-i)%2){
                   a[i]*=-1;
               }
               break;
            }
            i++;
        }
        for(int i=0;i<n;i++){
            ans+=a[i];
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n, k;
         cin>>n>>k;
         long long int a[n+5];
         for(int i=0;i<n;i++)
         cin>>a[i];
         Solution ob;
         cout<<ob.maximizeSum(a, n, k)<<endl;
     }
	
	return 0;
}
// } Driver Code Ends
