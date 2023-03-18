void deleteNode(struct Node **head, int key)
{

// Your code goes here
    Node *curr=*head,*prev=NULL;
    while(curr){
        if(curr->data==key){
            Node *temp=curr;
            prev->next=curr->next;
            delete(temp);
            break;
        }
        prev=curr;
        curr=curr->next;
    }
}

/* Function to reverse the linked list */
 void reverse(struct Node** head)
{

// Your code goes here
    
    Node *curr=*head,*prev=NULL;
    while(curr->next){
        Node *temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    curr->next=prev;
    *head=prev;
}
