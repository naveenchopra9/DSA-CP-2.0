// Implementation of Disjoint Set

// Time Complexity
// union-find constructor : O(n)
// find : O(log n) => O(h)
// union : O(log n)
// connected : O(log n) 

// Space Complexity
// for root vector : O(n)

#include<iostream>
#include<vector>

using namespace std;

class UnionFind{
	// root stores all the parent roots
	// rank stores height of each vertex
private:
	vector<int> root;
	vector<int> rank;
public:
	UnionFind(int sz) : root(sz),rank(sz){
		for(int i=0;i<sz;i++){
			root[i] = i;
			rank[i] = 1; 
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
			if(rank[rootX] > rank[rootY]){
				root[rootY] = rootX;
			}
			else if(rank[rootX] < rank[rootY]){
				root[rootX] = rootY;
			}
			else{
				// heights are equal
				root[rootY] = rootX;
				rank[rootX] += 1;
			}
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