#include <bits/stdc++.h> 
/***************************************
 
    Following is the Node class already written.

    class Node 
    {
    public:
        int data;
        Node* next;
        Node* prev;

        Node(int data) 
        {
            next = NULL; prev=NULL;
            this->data = data;
        }

        ~Node() 
        {
            if (next != NULL)
            {
                delete next;
            }
        }
    };
 
***************************************/

int countAllTripletSum(Node *head, int x)
{
    // Write your code here.
    int count = 0;
    if(!head){
        return count;
    }
    Node *last = head;
    while(last -> next){
        last = last -> next;
    }
    Node *curr = head;
    while(curr -> next && curr -> next -> next){
        Node *start = curr -> next, *end = last;
        while( start && start != end){
            if(curr -> data + start -> data + end -> data == x){
                count++;
                if(start -> next == end){
                    break;
                }
                start = start -> next;
                end = end -> prev;
            }
            else if(curr -> data + start -> data + end -> data > x){
                end = end -> prev;
            }
            else{
                start = start -> next;
            }
        }
        curr = curr -> next;
    }
    return count;
}
