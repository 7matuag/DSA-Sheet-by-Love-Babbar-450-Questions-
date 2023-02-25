//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
         vector<int>temp(26,0);
         priority_queue<int>pq;
         for(int i=0;i<s.size();i++){
             temp[s[i]-'a']++;
         }
         for(int i=0;i<26;i++){
             if(temp[i]){
                pq.push(temp[i]); 
             }
         }
         while(k--){
             int x=pq.top();
             pq.pop();
             x--;
             pq.push(x);
         }
         int ans=0;
         while(!pq.empty()){
             int x=pq.top();
             pq.pop();
             ans+=(x*x);
         }
         return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
