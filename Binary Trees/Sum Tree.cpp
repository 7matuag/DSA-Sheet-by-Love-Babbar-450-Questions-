class Solution
{
    public:
    bool isSumTree(Node* root)
    {
        // Your code here
        if(!root){
          return 1;
        }
        if(!root -> left && !root -> right){
            return 1;
        }
        isSumTree(root -> left);
        isSumTree(root -> right);
        int sum = 0;
        if(root -> left){
            sum += root -> left -> data;
        }
        if(root -> right){
            sum += root -> right -> data;
        }
        if(sum == root -> data){
            root -> data *= 2;
            return 1;
        }
        return 0;
    }
};
