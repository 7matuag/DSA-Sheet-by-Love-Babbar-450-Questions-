//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    void solve(int i,int s,vector<int> &v,vector<int>temp,vector<vector<int>>&ans){
        if(i==v.size()){
            if(s==0){
                ans.push_back(temp);
            }
            return ;
        }
        if(v[i]<=s){
            temp.push_back(v[i]);
            solve(i,s-v[i],v,temp,ans);
            temp.pop_back();
        }
        solve(i+1,s,v,temp,ans);
        return ;
    }
    vector<vector<int> > combinationSum(vector<int> &v, int s) {
        // Your code here
        vector<vector<int>>ans;
        vector<int>temp;
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(), v.end()), v.end());
        solve(0,s,v,temp,ans);
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	
// } Driver Code Ends
