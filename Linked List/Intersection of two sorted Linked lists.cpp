Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node *curr1=head1,*curr2=head2;
    Node *prev=NULL,*ans;
    while(curr1 && curr2){
        if(curr1->data==curr2->data){
            Node *temp=new Node(curr1->data);
            if(prev){
                prev->next=temp;
            }
            else{
                ans=temp;
            }
            prev=temp;
            curr2=curr2->next;
            curr1=curr1->next;
        }
        else if(curr1->data>curr2->data){
            curr2=curr2->next;
        }
        else{
            curr1=curr1->next;
        }
    }
    return ans;
}
