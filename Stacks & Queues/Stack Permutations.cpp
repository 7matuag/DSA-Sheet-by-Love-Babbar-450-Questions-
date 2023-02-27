//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int isStackPermutation(int N,vector<int> &A,vector<int> &B){
        stack<int>s;
        int n=A.size();
        int i=0,j=0;
        while(i<n){
            if(A[i]==B[j]){
                i++;
                j++;
            }
            else if(!s.empty() && s.top()==B[j]){
                while(!s.empty() && s.top()==B[j]){
                    s.pop();
                    j++;
                }
            }
            else{
                while(i<n && A[i]!=B[j]){
                    s.push(A[i]);
                    i++;
                }
            }
        }
        while(!s.empty() && s.top()==B[j]){
            s.pop();
            j++;
        }
        return j==n;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        Solution ob;
        cout<<ob.isStackPermutation(n,a,b)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends
