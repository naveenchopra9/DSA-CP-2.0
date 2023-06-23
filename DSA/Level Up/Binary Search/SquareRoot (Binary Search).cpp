#include <bits/stdc++.h>
using namespace std;
#define ll long long int

float SquareRoot(ll n,ll p){
    ll s=0;
    ll e=n;
    float ans=0;
    //Integer Part
    while(s<=e){
        ll mid=(s+e)/2;
        if( (mid*mid)==n){
            return mid;
        }
        else if((mid*mid)<n){
            s=mid+1;
            ans=mid;
        }
        else{
            e=mid-1;
        }
    }
    //Linear Search for Float Part
    float inc=0.1;
    for(ll place=1;place<=p;place++){
        //Do Linear Sarch
        while(ans*ans <=n){
            ans=ans+inc;
        }
        //One Step Back
        ans=ans-inc;
        inc=inc/10;
    }
    return ans;
}
int main() {
    ll n;cin>>n;
    ll p;cin>>p;
    cout<<SquareRoot(n,p);
    //cout<<sqrt(n);
	// your code goes here
	return 0;
}
