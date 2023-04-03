class Solution
{
    public:
    Node *compute(Node *head)
    {
        
        Node *curr = head;
        while(curr -> next){
            if(curr -> data < curr -> next -> data){
                curr -> data = curr -> next -> data;
                Node *temp = curr -> next;
                delete(temp);
                curr -> next = curr -> next -> next;
                curr = head;
            }
            else{
                curr = curr -> next;
            }
        }
        return head;
    }
};
