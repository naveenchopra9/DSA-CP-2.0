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
 
Node *midPoint(Node *head){
   Node *slow= head;
   Node *fast=head->next;
   
   while(fast!=NULL && head->next!=NULL){
       slow=slow->next;
       fast=fast->next->next;
   }
   return mid;
}

Node *mergeSort(Node *head){
    if(head!=NULL || head->next!=NULL){
        return head;
    }
    Node * mid=midPoint(head);
    
    Node *a=head;
    Node *b=mid->next;
    mid->next=NULL;
    
    a=mergeSort(a);
    b=mergeSort(b);
    
    reurn merge(a,b); // Preivious Func
}

int main() {
	mergeSort(a,b);
	return 0;
}
