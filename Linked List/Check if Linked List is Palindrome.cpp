/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    Node *reverse(Node *head){
        if(!head || !head->next){
            return head;
        }
        Node *prev=NULL,*curr=head;
        while(curr){
            Node *temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    bool isPalindrome(Node *head)
    {
        //Your code here
        Node *slow=head,*fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        Node *temp=reverse(slow);
        Node *curr=head;
        while(temp){
            if(temp->data!=curr->data){
                return 0;
            }
            temp=temp->next;
            curr=curr->next;
        }
        return 1;
    }
};
