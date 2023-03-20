class Solution{
    
    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    { 
        // Your code goes here
        vector<int> ans(n);
        stack<int> s;
        int j = n-1;
        for (int i = n-1; i >= 0; i--){
            while (!s.empty() && s.top() >= arr[i]){
                s.pop();
            } 
            if (s.empty()){
                ans[j] = -1;
            }
            else{
                ans [j] = s.top();
            }
            j--;
            s.push(arr[i]);
        }
        return ans;
    } 
};
