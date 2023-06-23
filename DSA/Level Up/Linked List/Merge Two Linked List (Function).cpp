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
 
Node* merge(Node *a, Node* b){
	//Complete this method
	//base case
	if(a==NULL){
		return b;
	}
	if(b==NULL){
		return a;
	}

	//rec case
	Node * c;

	if(a->data < b->data){
		c = a;
		c->next = merge(a->next,b);
	}
	else{
		c = b;
		c->next = merge(a,b->next);
	}
	return c;
}

int main() {
	merge(a,b);
	return 0;
}
