#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Node{
    public:
     ll data;
     Node * left;
     Node * right;
     
    Node (int d){
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
    
    Node * n=new Node(d);
    n->left=BuildTree();
    n->right=BuildTree();

    return n;
}
int main() {
    
    Node * root = BuildTree();
	// your code goes here
	return 0;
}
