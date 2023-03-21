class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        vector<vector<string> > ans;
        unordered_map<string, vector<string> > m;
        for(int i = 0; i < string_list.size(); i++){
            string temp = string_list[i];
            sort(temp.begin(),temp.end());
            m[temp].push_back(string_list[i]);
        }
        for(auto &i : m){
            ans.push_back(i.second);
        }
        return ans;
    }
};
