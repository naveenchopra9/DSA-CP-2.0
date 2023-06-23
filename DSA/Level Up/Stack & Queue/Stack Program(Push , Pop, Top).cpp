#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n;cin>>n; //n=5
    stack <ll> s; //LIFO
    for(ll i=0;i<n;i++){
        ll a;cin>>a; 
        s.push(a);
    }
    //1 2 3 4 5
    cout<<"Size->"<<s.size()<<endl;
    cout<<"Stack->";
    for(ll i=0;i<n;i++){
        cout<<s.top();
        s.pop();
    }
    cout<<endl;
    cout<<s.size();
    
	// your code goes here
	return 0;
}
