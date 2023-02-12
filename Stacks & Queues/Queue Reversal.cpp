//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;
queue<int> rev(queue<int> q);
int main()
{
    int test;
    cin>>test; 
    while(test--)
    {
    queue<int> q; 
    int n, var; 
    cin>>n; 
    while(n--)
    {
        cin>>var; 
        q.push(var);
    }
    queue<int> a=rev(q); 
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl; 
    }
}
// } Driver Code Ends


//function Template for C++

//Function to reverse the queue.
void solve(queue<int>&q,queue<int>&ans){
    if(q.empty()){
        return ;
    }
    int temp=q.front();
    q.pop();
    solve(q,ans);
    ans.push(temp);
    return ;
}
queue<int> rev(queue<int> q)
{
    // add code here.
    queue<int>ans;
    solve(q,ans);
    return ans;
}
