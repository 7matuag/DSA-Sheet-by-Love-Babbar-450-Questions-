int getNthFromLast(Node *head, int n)
{
       // Your code here
       Node *curr = head;
       while (n && curr){
           curr = curr -> next;
           n--;
       }
       if(!curr && n){
           return -1;
       }
       Node *start = head;
       while(curr){
           start = start -> next;
           curr = curr -> next;
       }
       return start -> data;
}
