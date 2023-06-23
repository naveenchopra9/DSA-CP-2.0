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

//ToDo : Complete the MaxSubset Function

class Pair{
public:
	int inc;
	int exc;

};
//O(N)
Pair maxSubsetSum(Node* root){
	Pair p;
	if(root==NULL){
		p.inc = p.exc = 0;
		return p;
	}

	Pair Left = maxSubsetSum(root->left);
	Pair Right = maxSubsetSum(root->right);

	p.inc = root->data + Left.exc + Right.exc;
	p.exc = max(Left.inc,Left.exc) + max(Right.inc,Right.exc);

	return p;
}


int main() {
    Node* root = BuildTree();
	LevelOrderPrint(root);

	Pair p = maxSubsetSum(root);
	cout <<"Max Sum : "<< max(p.inc, p.exc) <<endl;
	// your code goes here
	return 0;
}
