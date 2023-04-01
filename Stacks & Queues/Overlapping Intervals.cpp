class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
        // Code here
        vector<vector<int>>ans;
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        int start = intervals[0][0], end = intervals[0][1];
        for (int i = 1; i < n; i++){
            if(end >= intervals[i][0]){
                end = max(end, intervals[i][1]);
            }
            else{
                ans.push_back({start, end});
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }
        ans.push_back({start, end});
        return ans;
    }
};
