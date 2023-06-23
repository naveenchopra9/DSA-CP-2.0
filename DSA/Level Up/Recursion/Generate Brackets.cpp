#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void GenerateBrackets(string output, ll n, ll open, ll close , ll i){
    //Base case
    if(i==2*n){
        cout<<output<<endl;
        return;
    }
    
    //Recurisve Case
    if(open<n){
        GenerateBrackets(output +'(', n, open+1, close, i+1);
    }
    
    if(close<open){
        GenerateBrackets(output+')',n, open, close+1, i+1);
    }
}
int main() {
    string output;
    ll n;cin>>n;
    GenerateBrackets(output,n,0,0,0);
	// your code goes here
	return 0;
}
