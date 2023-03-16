class Solution {
public:
    string countAndSay(int n) {
        if(n==1){
            return "1";
        }
        if(n==2){
            return "11";
        }
        string s=countAndSay(n-1);
        int i=1;
        string ans="";
        while(i<=s.size()){
            int count=1;
            while(i<s.size() && s[i-1]==s[i]){
                count++;
                i++;
            }
            ans+=to_string(count);
            ans+=s[i-1];
            i++;
        }
        return ans;
    }
};
