#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Node{
    public:
    ll data;
    Node * left;
    Node * right;
    
    Node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};
//Input : 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
Node * BuildTree(){
    ll d;
    cin>>d;
    
    if(d==-1){
        return NULL;
    }
    
    Node *n= new Node(d);
    n->left=BuildTree();
    n->right=BuildTree();
    
    return n;
}

void LevelOrderPrint(Node * root){
    queue <Node *> q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        Node * temp=q.front();
        if(temp==NULL){
            cout<<endl;
            q.pop();
            
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            q.pop();
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
    return ;
}

void printKDistant(Node *root , int k){
    if(root == NULL|| k < 0 ){
        return;
    }
    
    if( k == 0 ){
        cout << root->data << " ";
         return;
    }
     
    printKDistant(root->left, k - 1 ) ;
    printKDistant(root->right, k - 1 ) ;
     
}
 

int main() {
    Node* root = BuildTree();
    printKDistant(root, 2);
	return 0;
}
