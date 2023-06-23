#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int max_profit(vector <int> price, int n){
    if(n<=0){
        return 0;
    }
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        int cut=i+1;
        int current_ans=price[i] + max_profit(price,n-cut);
        ans= max(ans,current_ans);
    }
    return ans;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
