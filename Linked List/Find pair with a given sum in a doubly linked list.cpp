#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

    class Node
    {
    public:
        int data;
        Node *next;
        Node *prev;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
            this->prev = NULL;
        }
    };

*****************************************************************/

bool findPair(Node* head, int k)
{
    // Write your code here.
    Node *start = head, *end = head;
    while(end -> next){
        end = end -> next;
    } 
    while(start != end){
        if(start -> data + end -> data == k){
            return 1;
        }
        else if(start -> data + end -> data > k){
            end = end -> prev;
        }
        else{
            start =start -> next;
        }
    }
    return 0;
}

