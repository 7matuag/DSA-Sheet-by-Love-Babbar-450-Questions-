
class Solution{   
public:
    int median(vector<vector<int>> &matrix, int R, int C){
        // code here 
        int low = INT_MAX;
        int high = INT_MIN;
        for(int i = 0; i < R; i++){
            high = max(high, matrix[i][C - 1]);
            low = min(low, matrix[i][0]);
        }
        int ans = 0; 
        int med = (R * C + 1) >> 1;
        while(high >= low){
            int mid = low + ((high - low) >> 1);
            int count = 0;
            for (int i = 0; i < R; i++){
                count += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
            }
            if(count >= med){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};
