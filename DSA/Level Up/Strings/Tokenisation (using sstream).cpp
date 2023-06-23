#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    string s;
    getline(cin,s);
    
    stringstream ss(s);
    
    string token;
    vector<string> tokens;
    
    while(getline(ss,token,' ')){
        tokens.push_back(token);
    }
    
    for(auto x: tokens){
        cout<<x<<",";
    }
	// your code goes here
	return 0;
}
