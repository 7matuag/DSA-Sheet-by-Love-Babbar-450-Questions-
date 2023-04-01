class Solution
{
public:
    void solve(Node *root, int sum, int len, int &maxLen, int &ans){
        if(!root){
            if(len == maxLen){
                ans = max(ans, sum);
            }
            else if(len > maxLen){
                maxLen = len;
                ans = sum;
            }
            return ;
        }
        solve(root -> left, sum + root -> data, len + 1, maxLen, ans);
        solve(root -> right, sum + root -> data, len + 1, maxLen, ans);
    }
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        int ans = 0, maxLen = 0;
        solve(root, 0, 0, maxLen, ans);
        return ans;
    }
};
