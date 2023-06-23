#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Graph{
  int V;
  list <int> *l;
  public:
    Graph(int v){
        V=v;
        l=new list<int>[V];
    }
    
    void addEdge(int i,int j,bool undir=true){
        l[i].push_back(j);
        if(undir){
            l[j].push_back(i);
        }
    }
    
    void printAdjList(){
        for(int i=0;i<V;i++){
            cout<<i<<"-->";
            for(auto node:l[i]){
                cout<<node<<",";
            }
            cout<<endl;
        }
    }
    
    void dfshelper(int node, bool *visited){
        visited[node]=true;
        cout<<node<<",";
        
        for(auto nbrs:l[node]){
            if(!visited[nbrs]){
                dfshelper(nbrs,visited);
            }
        }
        return ;
    }
    
    void dfs(int source){
        bool *visited=new bool[V]{0};
        dfshelper(source,visited);
    }
};

int main() {
    Graph g(7);
	g.addEdge(0,1);
	g.addEdge(1,2);
	g.addEdge(2,3);
	g.addEdge(3,5);
	g.addEdge(5,6);
	g.addEdge(4,5);
	g.addEdge(0,4);
	g.addEdge(3,4);
	//g.printAdjList();
	g.dfs(1);
	// your code goes here
	return 0;
}
