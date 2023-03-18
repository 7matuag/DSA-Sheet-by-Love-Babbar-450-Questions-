Node* reverseDLL(Node * head)
{
    //Your code here
    if(!head || !head->next){
        return head;
    }
    Node *curr=head,*pre=NULL;
    while(curr){
        pre=curr->prev;
        curr->prev=curr->next;
        curr->next=pre;
        curr=curr->prev;
    }
    return pre->prev;
}
