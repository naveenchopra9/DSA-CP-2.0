#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Node{
    public:
    ll data;
    Node * left;
    Node * right;
    
    Node(ll d){
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
    
    Node *n = new Node(d);
    n->left= BuildTree();
    n->right= BuildTree();
    
    return n;
}

/* Todo: Implement Level Order Traversal
Expected Output
1
2 3
4 5 6
7
*/

void LevelOrderPrint(Node * root){
    queue <Node *> q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        Node * temp = q.front();
        if(temp==NULL){
            cout<<endl;
            q.pop();
            //insert a new null for the next level
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
    return;
}

/* Implement Level Order Build for the tree */

Node* levelOrderBuild(){

	int d;
	cin>>d;

	Node* root = new Node(d);

	queue<Node*> q;
	q.push(root);


	while(!q.empty()){
		Node* current = q.front();
		q.pop();

		int c1, c2;
		cin>> c1 >> c2;

		if(c1!=-1){
			current->left = new Node(c1);
			q.push(current->left);
		}
		if(c2!=-1){
			current->right = new Node(c2);
			q.push(current->right);
		}
	}
	return root;
}

int main() {
    Node* root = levelOrderBuild();
    LevelOrderPrint(root);
	// your code goes here
	return 0;
}
