#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    string s;cin>>s;
    //sort(s.begin(),s.end());
    cout<<s<<" ";
    while(next_permutation(s.begin(),s.end())){
        cout<<s<<" ";
    }
	// your code goes here
	return 0;
}
