class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int j=nums.size()-1;
        while(j>0 && nums[j-1]>=nums[j]){
            j--;
        }
        reverse(nums.begin()+j,nums.end());
        if(j-1>=0){
            int k=j;
            while(j<nums.size() && nums[k-1]>=nums[j]){
                j++;
            }
            if(j<nums.size()){
                swap(nums[k-1],nums[j]);
            }
        }
    }
};
