class Solution{
  public:
    //Function to merge K sorted linked list.
    /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
    Node * mergeKLists(Node *arr[], int K)
    {
           // Your code here
        priority_queue<pair<int,Node*>,vector<pair<int,Node*>>,greater<pair<int,Node*>>>pq;
        for(int i=0;i<K;i++){
            if(arr[i]){
                pq.push({arr[i]->data,arr[i]});
            }
        }
        if(pq.empty()){
            return NULL;
        }
        Node *prev=NULL,*ans;
        while(!pq.empty()){
            auto curr=pq.top();
            pq.pop();
            Node *currnode=curr.second;
            if(prev){
                prev->next=currnode;
            }
            else{
                ans=currnode;
            }
            prev=currnode;
            if(currnode->next){
                pq.push({currnode->next->data,currnode->next});
            }
        }
        return ans;
    }
};
