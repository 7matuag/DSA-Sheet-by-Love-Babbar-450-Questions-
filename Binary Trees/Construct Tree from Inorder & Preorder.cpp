Node *solve(int i,int j,int in[],int pre[],int &k){
        if(i>j){
            return NULL;
        }
        Node *root=new Node(pre[k++]);
        int itr=i;
        while(itr<=j){
            if(in[itr]==root->data){
                break;
            }
            itr++;
        }
        root->left=solve(i,itr-1,in,pre,k);
        root->right=solve(itr+1,j,in,pre,k);
        return root;
    }
    
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        int k=0;
        return solve(0,n-1,in,pre,k);
    }
