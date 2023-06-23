// Implementation of Disjoint Set(Fast Union)

// Time Complexity
// union-find constructor : O(n)
// find : O(n)
// union : O(n) => uses find
// connected : O(n) => uses find 

// Space Complexity
// for root vector : O(n)

#include<iostream>
#include<vector>

using namespace std;

class UnionFind{
	// root stores all the parent roots
private:
	vector<int> root;
public:
	UnionFind(int sz) : root(sz){
		for(int i=0;i<sz;i++){
			root[i] = i;
		}
	}

	int find(int x){
		while(x != root[x]){
			x = root[x];
		}

		return x;
	}

	void unionSet(int x,int y){
		int rootX = find(x);
		int rootY = find(y);
		if(rootX != rootY){
			root[rootY] = rootX;
		}
	}

	bool connected(int x,int y){
		return find(x) == find(y);
	}

};

int main(int argc, char const *argv[])
{
	cout<<boolalpha;
	UnionFind uf(10);

	uf.unionSet(1,2);
	uf.unionSet(2,5);
	uf.unionSet(5,6);
	uf.unionSet(6,7);
	uf.unionSet(3,8);
	uf.unionSet(8,9);

	cout<<uf.connected(1,5)<<endl;
	cout<<uf.connected(5,7)<<endl;
	cout<<uf.connected(4,9)<<endl;

	uf.unionSet(9,4);
	cout<<uf.connected(4,9)<<endl;

	return 0;
}