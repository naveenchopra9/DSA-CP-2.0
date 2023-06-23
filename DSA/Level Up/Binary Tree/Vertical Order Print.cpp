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

//helper
void traverseTree(Node*root, int d, map<int,vector<int> > &m){
	if(root==NULL){
		return;
	}

	m[d].push_back(root->data);
	traverseTree(root->left, d-1,m);
	traverseTree(root->right,d+1,m);
}

void verticalOrderPrint(Node* root){
		
	map<int, vector<int> > m;
	int d = 0;

	traverseTree(root, d, m);

	//Keys are sorted (-2, -1,0,1,2,3.....)
	for(auto p:m){
		int key = p.first;
		vector<int> line = p.second;

		for(auto data : line){
			cout << data <<" ";
		}
		cout <<endl;

	}	
	return;
}


int main() {
    Node* root = new Node(1);
	root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->left->right = new Node(8);
    root->right->right->right = new Node(9);

    verticalOrderPrint(root);
	return 0;
}
