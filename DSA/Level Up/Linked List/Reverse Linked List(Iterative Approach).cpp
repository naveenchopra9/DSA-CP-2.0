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
 
void IterReverse(Node * &head){
    Node* prev = NULL;
	Node* current = head;
	Node* temp;

	while(current!=NULL){
		//store next
		temp = current->next;
		//update the current
		current->next = prev;

		//prev and current
		prev = current;
		current = temp;
	}

	head = prev;
	return;
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
	cout<<endl;
	IterReverse(head);
	printList(head);
	return 0;
}
