#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> v={10,34,2,33,90,55};
    //priority_queue <int> heap;   //By Default it will be Max Heap
    
    priority_queue <int, vector<int> , greater<int> > heap;  //It will be a Min Heap
    
    for(auto i:v){
        heap.push(i);
    }
    while(!heap.empty()){
        cout<<heap.top()<<endl;
        heap.pop();
    }
	// your code goes here
	return 0;
}
