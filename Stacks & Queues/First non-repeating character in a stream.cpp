//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string s){
		    string ans="";
		    queue<char>q;
		    vector<int>temp(26,0);
		    for(int i=0;i<s.size();i++){
		        temp[s[i]-'a']++;
		        if(temp[s[i]-'a']==1){
		            q.push(s[i]);
		        }
		        while(!q.empty() && temp[q.front()-'a']!=1){
		            q.pop();
		        }
		        if(q.empty()){
		            ans+='#';
		        }
		        else{
		            ans+=q.front();
		        }
		    }
		    return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
