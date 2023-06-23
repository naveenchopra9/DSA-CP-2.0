#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n,s;cin>>n>>s;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(ll i=0;i<n-2;i++){
        ll l=i+1,r=n-1;
        while(l<r){
            if(arr[i]+arr[l]+arr[r]==s){
                cout<<arr[i]<<" "<<arr[l]<<" "<<arr[r]<<endl;
                l++;
                r--;
            }
            else if(arr[i]+arr[l]+arr[r]<s){
                l++;
            }
            else{
                r--;
            }
        }
    }
	// your code goes here
	return 0;
}
