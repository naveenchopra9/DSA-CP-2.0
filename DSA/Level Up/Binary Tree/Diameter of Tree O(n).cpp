#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Node{
    public:
    ll data;
    Node *left;
    Node * right;
    
    Node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};

Node * BuildTree(){
    ll d;
    cin>>d;
    
    if(d==-1){
        return NULL;
    }
    
    Node * n= new Node(d);
    n->left= BuildTree();
    n->right=BuildTree();
    
    return n;
}

void  LevelOrderPrint(Node * root){
    queue <Node *> q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        Node *temp= q.front();
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
    return;
}

int height(Node * root){
    if(root==NULL){
        return 0;
    }
    ll h1= height(root->left);
    ll h2= height(root->right);
    
    return 1+max(h1,h2);
}

ll Diameter(Node * root){
    if(root==NULL){
        return 0;
    }
    
    ll D1= height(root->left)+height(root->right);
    ll D2= Diameter(root->left);
    ll D3= Diameter(root->right);
    
    return max(D1, max(D2,D3));
}

//---------Diameter Optimised
class HDPair{
public:
	int height;
	int diameter;
};

HDPair optDiameter(Node*root){
	HDPair p;

	if(root==NULL){
		p.height = p.diameter = 0;
		return p;
	}

	//otherwise
	HDPair Left = optDiameter(root->left);
	HDPair Right = optDiameter(root->right);

	p.height = max(Left.height,Right.height) + 1;

	int D1 = Left.height + Right.height;
	int D2 = Left.diameter;
	int D3 = Right.diameter;

	p.diameter = max(D1,max(D2,D3));
	return p;
}

int main() {
    Node * root=BuildTree(); 
    LevelOrderPrint(root);
    cout<<"Diameter is="<<Diameter(root)<<endl;
    cout<<"Opt Diameter is="<<optDiameter(root).diameter;
	// your code goes here
	return 0;
}
