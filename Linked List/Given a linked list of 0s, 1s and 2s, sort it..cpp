
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        Node *curr = head;
        int ones = 0, twos = 0, zeros = 0;
        while(curr){
            if(curr -> data == 0){
                zeros++;
            }
            else if(curr -> data == 1){
                ones++;
            }
            else{
                twos++;
            }
            curr = curr -> next;
        }
        curr = head;
        while(zeros--){
            curr -> data = 0;
            curr = curr -> next;
        }
        while(ones--){
            curr -> data = 1;
            curr = curr -> next;
        }
        while(twos--){
            curr -> data = 2;
            curr = curr -> next;
        }
        return head;
    }
};
