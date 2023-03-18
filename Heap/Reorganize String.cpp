class Solution {
public:
    string reorganizeString(string s) {
        int n=s.size();
        vector<int>temp(26,0);
        for(int i=0;i<n;i++){
            temp[s[i]-'a']++;
        }
        priority_queue<pair<int,char>>pq;
        for(int i=0;i<26;i++){
            if(temp[i]>0){
                pq.push({temp[i],i+'a'});
            }
        }
        s="";
        while(!pq.empty()){
            auto x=pq.top();
            pq.pop();
            while(x.first--){
                s+=x.second;
            }
        }
        string ans="";
        int i=0,j=n/2;
        if(n%2){
            j++;
        }
        while(j<n){
            if(s[i]==s[j]){
                return "";
            }
            ans+=s[i++];
            ans+=s[j++];
        }
        if(n%2){
            ans+=s[i];
        }
        return ans;
    }
};
