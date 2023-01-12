//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
        //Your code here
        int ans=0;
        unordered_set<int>s;
        for(int i=0;i<N;i++){
            s.insert(arr[i]);
        }
        for(int i=0;i<N;i++){
            if(s.find(arr[i]-1)==s.end()){
                int res=1;
                int k=arr[i];
                while(s.find(k+1)!=s.end()){
                    res++;
                    k++;
                }
                ans=max(res,ans);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends
