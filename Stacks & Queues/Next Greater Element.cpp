vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long> ans(n);
        int j = n-1;
        stack<long long> s;
        for (int i = n-1; i >= 0; i--){
            while (!s.empty() && s.top() <= arr[i]){
                s.pop();
            }
            if(s.empty()){
                ans[j] = -1;
            }
            else{
                ans[j] = s.top();
            }
            s.push(arr[i]);
            j--;
        }
        return ans;
    }
