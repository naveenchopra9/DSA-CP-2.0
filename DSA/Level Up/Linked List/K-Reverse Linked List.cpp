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
 
Node* kReverse(Node *head,int k){
	//base case
	if(head==NULL){
		return NULL;
	}

	//reverse the first k nodes
	Node* prev = NULL;
	Node* current = head;
	Node * temp;
	int cnt = 1;

	while(current!=NULL and cnt<=k){
		//store next
		temp = current->next;
		//update the current
		current->next = prev;

		//prev and current
		prev = current;
		current = temp;
		cnt++;
	}

	if(temp!=NULL){
		 head->next = kReverse(temp,k);
	}
	return prev;
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
	head=kReverse(head,2);
	printList(head);
	return 0;
}
