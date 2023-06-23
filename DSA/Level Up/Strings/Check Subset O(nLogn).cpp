#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    string s1,s2;
    cin>>s1>>s2;
    ll n1=s1.size();
    ll n2=s2.size();
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    ll c=0;
    for(ll i=0;i<n2;i++){
        if(binary_search(s1.begin(),s1.end(),s2[i])){
            c++;
        }
    }
    if(c==n2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
	// your code goes here
	return 0;
}
