#include <bits/stdc++.h>
using namespace std;
#define ll long long int
class Node{
    public:
     ll data;
     Node *next;
};

void printList(Node *n){
    while(n!=NULL){
        cout<<n->data<<"-->";
        n=n->next;
    }
}

void PushFront(Node** head_ref, int new_data){
    /* 1. allocate node */
    Node* new_node = new Node();
 
    /* 2. put in the data */
    new_node->data = new_data;
 
    /* 3. Make next of new node as head */
    new_node->next = (*head_ref);
 
    /* 4. move the head to point to the new node */
    (*head_ref) = new_node;
}
 
int main() {
    Node * head= NULL;
    Node * second=NULL;
    Node * third=NULL;
    
    head= new Node();
    second= new Node();
    third= new Node();
    
    head->data=1;
    head->next=second;
    
    second->data=2;
    second->next=third;
    
    third->data=3;
    third->next=NULL;
    
    printList(head);
    
    // Insert 7 at the beginning.
    // So linked list becomes 7->1->2->3->NULL
    PushFront(&head , 4);
    // your code goes here
    cout<<endl;
    printList(head);
    return 0;
}
