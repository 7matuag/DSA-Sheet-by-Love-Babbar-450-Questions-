/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode *solve(int &k,int i,int j,vector<int>&in,vector<int>&pre){
        if(i>j){
            return NULL;
        }
        TreeNode *root=new TreeNode(pre[k++]);
        int idx=0;
        while(root->val!=in[idx]){
            idx++;
        }
        root->left=solve(k,i,idx-1,in,pre);
        root->right=solve(k,idx+1,j,in,pre);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector<int>inorder=preorder;
        sort(inorder.begin(),inorder.end());
        int k=0;
        return solve(k,0,inorder.size()-1,inorder,preorder);
    }
};
