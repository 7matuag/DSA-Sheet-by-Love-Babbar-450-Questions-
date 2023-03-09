int maxSubStr(string s){
        //Write your code here
        int count=0,ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                count++;
            }
            else{
                count--;
            }
            if(!count){
                ans++;
            }
        }
        if(count!=0){
            return -1;
        }
        return ans;
    }
