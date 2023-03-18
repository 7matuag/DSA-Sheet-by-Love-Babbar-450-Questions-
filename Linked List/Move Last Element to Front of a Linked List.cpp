class Solution{
public:
    ListNode *moveToFront(ListNode *head){
        ListNode *curr=head,*prev=NULL;
        while(curr->next){
            prev=curr;
            curr=curr->next;
        }
        if(prev){
            curr->next=head;
            prev->next=NULL;
        }
        return curr;
    }
};
