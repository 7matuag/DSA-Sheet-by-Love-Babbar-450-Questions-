class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int n)
    {
        //code here
        vector<int>ans;
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
        for(int i=0;i<n;i++){
            pq.push({arr[i][0],{0,i}});
        }
        while(!pq.empty()){
            auto curr=pq.top();
            pq.pop();
            ans.push_back(curr.first);
            int currind=curr.second.first;
            int currarrind=curr.second.second;
            if(currind+1<arr[currarrind].size()){
                pq.push({arr[currarrind][currind+1],{currind+1,currarrind}});
            }
        }
        return ans;
    }
};
