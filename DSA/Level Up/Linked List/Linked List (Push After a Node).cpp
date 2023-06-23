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

void insertAfter(Node* prev_node, int new_data) {
   
    // 1. Check if the given prev_node is NULL
    if (prev_node == NULL) { 
        cout << "the given previous node cannot be NULL"; 
        return; 
    }
   
    // 2. Allocate new node
    Node* new_node = new Node();
   
    // 3. Put in the data
    new_node->data = new_data; 
   
    // 4. Make next of new node as
    // next of prev_node
    new_node->next = prev_node->next; 
   
    // 5. move the next of prev_node
    // as new_node
    prev_node->next = new_node; 
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
    
    insertAfter(head->next,8);
	cout<<endl;
	printList(head);
	return 0;
}
