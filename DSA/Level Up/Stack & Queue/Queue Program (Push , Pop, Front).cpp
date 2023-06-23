#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n;cin>>n; //5
    queue<ll> q; // FIFO
    for(ll i=0;i<n;i++){
        ll a;cin>>a;
        q.push(a);
    }
    //1 2 3 4 5
    cout<<"SIZE->"<<q.size()<<endl;
    for(ll i=0;i<n;i++){
        cout<<q.front();
        q.pop();
    }
    cout<<endl;
    cout<<q.size();
	// your code goes here
	return 0;
}
