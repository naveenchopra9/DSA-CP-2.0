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
int main() {
    //Node * root=BuildTree();
    Node * root= LevelOrderBuild();
    LevelOrderPrint(root);
    cout<<endl;
    cout<<"Height of Tree is:"<<height(root);
	// your code goes here
	return 0;
}
