#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int join_ropes(int arr[], int n){
    priority_queue <int, vector<int> , greater<int> > pq(arr,arr+n);
    
    int cost=0;
    
    while(pq.size()>1){
        int A=pq.top();
        pq.pop();
        
        int B=pq.top();
        pq.pop();
        
        int new_rope=A+B;
        cost+=new_rope;
        
        pq.push(new_rope);
    }
    return cost;
}

int main() {
    int ropes[] = {4, 3, 2, 6};
	int n = 4;

	cout << join_ropes(ropes, n) << endl;
	// your code goes here
	return 0;
}
