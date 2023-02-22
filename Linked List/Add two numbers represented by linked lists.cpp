//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    Node *rev(Node *head){
        if(!head || !head->next){
            return head;
        }
        Node *curr=head,*prev=NULL;
        while(curr){
            Node *nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        return prev;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        Node *curr=rev(first);
        Node *head1=curr,*prev1=NULL;
        Node *head2=rev(second);
        int carry=0;
        while(head1 && head2){
            int sum=(head1->data+head2->data+carry);
            head1->data=sum%10;
            carry=sum/10;
            prev1=head1;
            head1=head1->next;
            head2=head2->next;
        }
        while(head1){
            int sum=(head1->data+carry);
            head1->data=sum%10;
            carry=sum/10;
            prev1=head1;
            head1=head1->next;
        }
        while(head2){
            int sum=(head2->data+carry);
            Node *temp=new Node(sum%10);
            prev1->next=temp;
            prev1=temp;
            carry=sum/10;
            head2=head2->next;
        }
        while(carry){
            Node *temp=new Node(carry);
            prev1->next=temp;
            prev1=temp;
            carry=0;
        }
        prev1->next=NULL;
        return rev(curr);
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends
