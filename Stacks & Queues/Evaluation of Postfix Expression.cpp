//{ Driver Code Starts
// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string s)
    {
        // Your code here
        stack<int>stk;
        for(int i=0;i<s.size();i++){
            if(s[i]>='0' && s[i]<='9'){
                stk.push(s[i]-'0');
            }
            else{
                int a=stk.top();
                stk.pop();
                int b=stk.top();
                stk.pop();
                if(s[i]=='+'){
                    stk.push(b+a);
                }
                else if(s[i]=='-'){
                    stk.push(b-a);
                }
                else if(s[i]=='*'){
                    stk.push(b*a);
                }
                else if(s[i]=='/'){
                    stk.push(b/a);
                }
            }
        }
        return stk.top();
    }
};

//{ Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends
