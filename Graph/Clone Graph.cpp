/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    void solve(Node* node,Node* ans,map<int,Node*>&m){
        ans->val=node->val;
        m[ans->val]=ans;
        for(auto &i:node->neighbors){
            if(m.find(i->val)==m.end()){
                Node* temp=new Node();
                solve(i,temp,m);
                ans->neighbors.push_back(temp);
            }
            else {
                ans->neighbors.push_back(m[i->val]);
            }
        }
    } 
    Node* cloneGraph(Node* node) {
        if(!node){
            return NULL;
        }
        Node* ans=new Node();
        map<int,Node*>m;
        solve(node,ans,m);
        return ans;
    }
};
