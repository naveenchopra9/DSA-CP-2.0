#include<bits/stdc++.h>

using namespace std;

void fileio(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		// freopen("output.txt","w",stdout);
	#endif
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

class treeNode{
public:
	int data;
	treeNode *left,*right;

	treeNode(int data){
		this->data = data;
		left = NULL;
		right = NULL;
	}

};

treeNode *buildTree(){
	int x;
	cin>>x;
	if(x == -1) return NULL;
	treeNode *root = new treeNode(x);
	root->left = buildTree();
	root->right = buildTree();
	return root;
}

void print(treeNode *root){
	if(root == NULL) return;
	cout<<root->data<<" ";
	print(root->left);
	print(root->right);
}

treeNode* lca(treeNode* root, int a,int b){
	if(!root or root->data == a or root->data == b) return root;
	auto L = lca(root->left,a,b);
	auto R = lca(root->right,a,b);
	if(L and R) return root;
	return L ? L : R;
}

int main(int argc, char const *argv[])
{
	fileio();
	treeNode *root;
	root = buildTree();
	print(root);
	cout<<"\nLCA : " <<lca(root,6,7)->data<<endl;
	return 0;
}