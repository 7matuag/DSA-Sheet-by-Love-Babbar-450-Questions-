//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string smallestNumber(int s, int d){
        // code here 
        if(s>9*d){
            return "-1";
        }
        string str="";
        s--;
        for(int i=0;i<d-1;i++){
            if(s>=9){
                str+="9";
                s-=9;
            }
            else{
                str+=to_string(s);
                s=0;
            }
        }
        str+=to_string(s+1);
        reverse(str.begin(),str.end());
        return str;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int S,D;
        cin >> S >> D;
        Solution ob;
        cout << ob.smallestNumber(S,D) << endl;
    }
    return 0; 
} 
// } Driver Code Ends
