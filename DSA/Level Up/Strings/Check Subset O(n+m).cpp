#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    string s1,s2;
    cin>>s1>>s2;
    ll j=0,c=0;
    for(ll i=0;i<s1.size();i++){
        if(s1[i]==s2[j]){
            j++;
            c++;
        }
        if(c==s2.size()){
            break;
        }
    }
    if(c==s2.size()){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
	// your code goes here
	return 0;
}
