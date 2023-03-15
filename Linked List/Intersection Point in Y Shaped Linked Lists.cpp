/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    int l1=0,l2=0;
    Node *curr1=head1,*curr2=head2;
    while(curr1){
        l1++;
        curr1=curr1->next;
    }
    while(curr2){
        l2++;
        curr2=curr2->next;
    }
    curr1=head1,curr2=head2;
    if(l1>l2){
        for(int i=0;i<l1-l2;i++){
            curr1=curr1->next;
        }
    }
    else{
        for(int i=0;i<l2-l1;i++){
            curr2=curr2->next;
        }
    }
    while(curr1 && curr2){
        if(curr1==curr2){
            return curr1->data;
        }
        curr1=curr1->next;
        curr2=curr2->next;
    }
    return -1;
}
