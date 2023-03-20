void insert(struct TrieNode *root, string key)
{
    // code here
    TrieNode *curr=root;
    for(int i = 0; i < key.size(); i++){
        if(!curr -> children[key[i] - 'a']){
            curr -> children[key[i] - 'a'] = new TrieNode();
        }
        curr = curr -> children[key[i] - 'a'];
    }
    curr -> isLeaf = 1;
}

//Function to use TRIE data structure and search the given string.
bool search(struct TrieNode *root, string key) 
{
    // code here
    TrieNode *curr=root;
    for(int i = 0; i < key.size() && curr; i++){
        if(!curr -> children[key[i] - 'a']){
            return 0;
        }
        curr = curr -> children[key[i] - 'a'];
    }
    return curr && curr -> isLeaf;
}
