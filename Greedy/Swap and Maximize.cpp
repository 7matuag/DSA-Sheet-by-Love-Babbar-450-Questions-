//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long int maxSum(int arr[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;++i)
			cin>>arr[i];
		cout<<maxSum(arr,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends


long long int maxSum(int arr[], int n)
{
    sort(arr,arr+n);
   long long int ans=0;
   int i=0,j=n-1;
   while(j>i){
       ans+=(arr[j]-arr[i]);
       ans+=(arr[j]-arr[i+1]);
       i++;
       j--;
   }
   ans+=(arr[i]-arr[0]);
   return ans;
}
