class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0,fb=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]-fb>0){
                ans=max(ans,prices[i]-fb);
            }
            else{
                fb=prices[i];
            }
        }
        return ans;
    }
};
