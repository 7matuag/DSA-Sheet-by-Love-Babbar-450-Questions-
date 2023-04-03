class Solution{
public:
    Node* divide(int N, Node *head){
        // code her
        Node *curr = head;
        bool fe = 1, fo = 1;
        Node *even = NULL, *odd = NULL;
        Node *evenhead = NULL, *oddhead = NULL;
        while(curr){
            if((curr -> data) & 1){
                if(fo){
                    oddhead = curr;
                    odd = curr;
                    fo = 0;
                }
                else{
                    odd -> next = curr;
                    odd = curr;
                }
            }
            else{
                if(fe){
                    evenhead = curr;
                    even = curr;
                    fe = 0;
                }
                else{
                    even -> next = curr;
                    even = curr;
                }
            }
            curr = curr -> next;
        }
        if(even){
            even -> next = NULL;   
        }
        if(odd){
            odd -> next = NULL;
        }
        if(evenhead){
            even -> next = oddhead;
            return evenhead;
        }
        return oddhead;
    }
};
