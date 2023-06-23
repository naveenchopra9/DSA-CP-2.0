#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Node{
    public:
    int key;
    Node * left;
    Node * right;
    Node(int key){
        this->key=key;
        left=NULL;
        right=NULL;
    }
};

Node * insert(Node * root, int key){
    if(root==NULL){
        return new Node(key);
    }
    
    if(key<root->key){
        root->left=insert(root->left,key);
    }
    else{
        root->right=insert(root->right,key);
    }
    return root;
}
//Inorder
void PrintBST(Node * root){
    if(root==NULL){
        return;
    }
    PrintBST(root->left);
    cout<<root->key<<",";
    PrintBST(root->right);
}

Node *sortedArrayToBST(vector <int> v,int s, int e){
    if(s>e){
        return NULL;
    }
    
    int mid=(s+e)/2;
    Node *root= new Node(v[mid]);
    
    root->left=sortedArrayToBST(v,s,mid-1);
    root->right=sortedArrayToBST(v,mid+1,e);
    return root;
}
int main() {
    vector <int> v={1,2,3,4,5,6};
    Node *root=NULL;
    for(auto i:v){
        root=insert(root,i);
    }
    PrintBST(root);
    cout<<endl;
    sortedArrayToBST(v,0,v.size()-1);
	// your code goes here
	return 0;
}
