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

//Find Closest
int findClosestInBST(Node * root, int target){
	//todo 

	int closest;
	int diff = INT_MAX;

	Node *temp = root;

	while(temp!=NULL){

		int current_diff = abs(temp->key - target);

		if(current_diff==0){
			return temp->key;
		}

		
		if(current_diff < diff){
			diff = current_diff;
			closest = temp->key;
		}


		//right or left
		if(temp-> key < target){
			temp = temp -> right;
		}
		else{
			temp = temp->left;
		}
	}
	return closest;

}
int main() {
    vector <int> v={1,2,3,4,5,6};
    Node *root=NULL;
    for(auto i:v){
        root=insert(root,i);
    }
    PrintBST(root);
    cout<<endl;
    cout<<findClosestInBST(root,12);
	// your code goes here
	return 0;
}
