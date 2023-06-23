#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Node{
    public:
    ll data;
    Node *next;
};

void PrintList(Node *n){
    while(n!=NULL){
        cout<<n->data<<"->";
        n=n->next;
    }
}

void InsertAtHead(Node **href, ll new_data){
    Node *new_node = new Node();
    
    new_node->data=new_data;
    
    new_node->next=(*href);
    
    (*href)= new_node;
}

Node *mergeList(Node *a, Node*b){
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }
    
    Node *c=NULL;
    if(a->data<b->data){
        c=a;
        c->next=mergeList(a->next,b);
    }
    else{
        c=b;
        c->next=mergeList(a,b->next);
    }
    return c;
}

void Reverse(Node *&head){
    Node *prev=NULL;
    Node *current=head;
    Node *temp;
    
    while(current!=NULL){
        temp=current->next;
        current->next=prev;
        
        prev=current;
        current=temp;
    }
    head=prev;
    return;
}
int main() {
    Node *a=NULL;
    InsertAtHead(&a,3);
    InsertAtHead(&a,2);
    InsertAtHead(&a,1);
    cout<<"LINKED LIST A"<<endl;
    PrintList(a);
    cout<<endl;
    Node *b=NULL;
    InsertAtHead(&b,8);
    InsertAtHead(&b,7);
    InsertAtHead(&b,6);
    cout<<"LINKED LIST B"<<endl;
    PrintList(b);
    cout<<endl;
    Node *c=mergeList(a,b);
    cout<<"AFTER MERGING A AND B -> C"<<endl;
    PrintList(c);
    cout<<endl;
    cout<<"AFTER REVERSING C"<<endl;
    Reverse(c);
    PrintList(c);
	// your code goes here
	return 0;
}
