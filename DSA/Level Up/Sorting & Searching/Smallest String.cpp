#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool compare(string x,string y){
    return x+y < y+x;
}
int main() {
    ll n;cin>>n;
    vector <string> s;
    for(ll i=0;i<n;i++){
        string ss;cin>>ss;
        s.push_back(ss);
    }
    sort(s.begin(),s.end(),compare);
    for(auto x: s){
        cout <<x;
    }
	// your code goes here
	return 0;
}
