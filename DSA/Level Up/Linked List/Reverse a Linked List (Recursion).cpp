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

Node* recReverse(Node *head){
	//base case
	if(head==NULL or head->next==NULL){
		return head;
	}
	//otherwise
	Node* sHead = recReverse(head->next);
	head->next->next = head;
	head->next = NULL;
	return sHead;
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
	head =recReverse(head);
	printList(head);
	return 0;
}
