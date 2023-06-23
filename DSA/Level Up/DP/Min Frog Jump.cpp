#include <bits/stdc++.h>
using namespace std;
#define ll long long int

//Bottom Up Approach
int min_cost(vector <int> stones){
    int n=stones.size();
    vector <int> dp(n);
    
    dp[0]=0;
    dp[1]=abs(stones[1]-stones[0]);
    
    for(int i=2;i<n;i++){
        int op1=dp[i-1]+ abs(stones[i]-stones[i-1]);
        int op2=dp[i-2]+ abs(stones[i]-stones[i-2]);
        dp[i]= min(op1,op2);
    }
    return dp[n-1];
}
int main() {
    //Call Func
    vector <int> stones{10,30,40,20};
    cout<<min_cost(stones);
	// your code goes here
	return 0;
}
