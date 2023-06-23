#include <bits/stdc++.h>
using namespace std;
#define ll long long int

vector <string> fizzbuzz(ll n){
   
    vector <string> output;
        for(ll i=1;i<=n;i++){
            if(i%15==0){
                output.push_back("FizBuzz");
            }
            else if(i%5==0){
                output.push_back("Buzz");
            }
            else if(i%3==0){
                output.push_back("Fizz");
            }
            else{
                output.push_back(to_string(i));
            }
        }
    return output;
}

int main() {
    ll n;cin>>n;
    vector<string> output = fizzbuzz(n);
	for(string x : output){
		cout << x <<",";
	}
	// your code goes here
	return 0;
}
