//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    static bool cmp(pair<int,int>&a,pair<int,int>&b){
        if(b.second==a.second){
            return a.first<b.first;
        }
        return b.second>a.second;
    }
    int activitySelection(vector<int> s, vector<int> e, int n)
    {
        // Your code here
        vector<pair<int,int>>vp;
        for(int i=0;i<n;i++){
            vp.push_back({s[i],e[i]});
        }
        sort(vp.begin(),vp.end(),cmp);
        int ans=1,end=vp[0].second;
        for(int i=1;i<n;i++){
            if(end<vp[i].first){
                ans++;
                end=vp[i].second;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout << ob.activitySelection(start, end, n) << endl;
    }
    return 0;
}

// } Driver Code Ends
