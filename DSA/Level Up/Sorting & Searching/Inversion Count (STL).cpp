#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll Inversion(vector <ll> v, ll n){
    // Create an empty set and insert first element in it
    multiset<int> set1;
    set1.insert(v[0]);
  
    int invcount = 0; // Initialize result
  
    multiset<int>::iterator itset1; // Iterator for the set
  
    // Traverse all elements starting from second
    for (int i=1; i<n; i++)
    {
        // Insert arr[i] in set (Note that set maintains
        // sorted order)
        set1.insert(v[i]);
  
        // Set the iterator to first greater element than arr[i]
        // in set (Note that set stores arr[0],.., arr[i-1]
        itset1 = set1.upper_bound(v[i]);
  
        // Get distance of first greater element from end
        // and this distance is count of greater elements
        // on left side of arr[i]
        invcount += distance(itset1, set1.end());
    }
  
    return invcount;
}
int main() {
    ll n;cin>>n;
    vector <ll> v;
    for(ll i=0;i<n;i++){
        ll a;cin>>a;
        v.push_back(a);
    }
    cout<<Inversion(v,n);
	// your code goes here
	return 0;
}
