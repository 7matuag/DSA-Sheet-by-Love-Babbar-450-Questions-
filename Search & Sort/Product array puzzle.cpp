vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        vector<long long int>ans;
        long long int pro=1;
        int k=0;
        for(int i=0;i<n;i++){
            if(nums[i]){
                pro*=nums[i];
            }
            else{
                k++;
            }
        }
        if(k==0){
            for(int i=0;i<n;i++){
                ans.push_back(pro/nums[i]);
            }
        }
        else if(k==1){
            for(int i=0;i<n;i++){
                if(nums[i]){
                    ans.push_back(0);    
                }
                else{
                    ans.push_back(pro);
                }
            }  
        }
        else{
            for(int i=0;i<n;i++){
                ans.push_back(0);
            }  
        }
        return ans;
    }
