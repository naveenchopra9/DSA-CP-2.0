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

Node * LevelOrderBuild(){
    int d;
    cin>>d;
    Node * root= new Node(d);
    queue <Node*> q;
    q.push(root);
    
    while(!q.empty()){
        Node *current = q.front();
        q.pop();
        
        ll c1,c2;
        cin>>c1>>c2;
        
        if(c1!=-1){
            current->left=new Node(c1);
            q.push(current->left);
        }
        if(c2!=-1){
            current->right=new Node(c2);
            q.push(current->right);
        }
    }
    return root;
}

ll height(Node * root){
    if(root==NULL){
        return 0;
    }
    ll h1= height(root->left);
    ll h2= height(root->right);
    return 1+max(h1,h2);
}

ll diameter(Node * root){
    if(root==NULL){
        return 0;
    }
    ll D1= height(root->left)+height(root->right);
    ll D2= diameter(root->left);
    ll D3= diameter(root->right);
    
    return max(D1, max(D2,D3));
}

//Replace with Descedant Sum

ll ReplaceWithSum(Node * root){
    //base case
    if(root==NULL){
        return  0;
    }
    if(root->left==NULL && root->right==NULL){
        return root->data;
    }
    
    //rec case
    ll LS= ReplaceWithSum(root->left);
    ll RS= ReplaceWithSum(root->right);
    
    ll temp= root->data;
    root->data=LS+RS;
    return temp+root->data;
}
//Height balanced tree
// O(N) time
pair<int,bool> isHeightBalanced(Node *root){

	pair<int,bool> p, Left, Right;

	if(root==NULL){
		p.first = 0; //height
		p.second = true; // balanced
		return p;
	}

	//rec case (Postorder Traversal)
	Left = isHeightBalanced(root->left);
	Right = isHeightBalanced(root->right);

	int height = max(Left.first, Right.first) + 1;

	if(abs(Left.first - Right.first)<=1 and Left.second and Right.second){
			return make_pair(height,true);
	}
	return make_pair(height,false);
}

int main() {
    Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->right = new Node(6);
	root->left->right->left = new Node(7);
	root->left->right->right = new Node(8);
	//root->left->right->right->left = new Node(9);
	//root->left->right->right->right = new Node(10);
	
	pair<int,bool> p = isHeightBalanced(root);
	if(p.second){
		cout << "Yes, its height balanced";
	}
	else{
		cout << "Not a height balanced tree";
	}
	// your code goes here
	return 0;
}
