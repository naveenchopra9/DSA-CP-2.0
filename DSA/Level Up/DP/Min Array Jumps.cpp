#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int min_jump(vector <int> v, int n, vector<int> dp, int i){
    //base case
    if(i==n-1){
        return 0;
    }
    if(i>=n){
        return INT_MAX;
    }
    //rec case
    if(dp[i]!=0){
        return dp[i];
    }
    
    int steps=INT_MAX;
    int max_jump=v[i];
    
    for(int jump=1;jump<=max_jump;jump++){
        int next_cell=i+jump;
        int subprob= min_jump(v,n,dp,next_cell);
        if(subprob!=INT_MAX){
            steps=min(steps,subprob+1);
        }
    }
    
    return dp[i]=steps;
}
int main() {
    vector <int> ladder{6,2,6,1,7,9,3,5,3,7,2,8,9,4,7,7,2,2,8,4,6,6,1,3};
    int n=ladder.size();
    
    vector <int> dp(n,0);
    cout<<min_jump(ladder,n,dp,0);
	// your code goes here
	return 0;
}
