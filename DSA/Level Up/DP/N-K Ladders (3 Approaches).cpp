#include <bits/stdc++.h>
using namespace std;
#define ll long long int

//Recur
int countR(int n,int k){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    int ans=0;
    for(int jump=1;jump<=k;jump++){
        ans+=countR(n-jump,k);
    }
    return ans;
}

//Top Down Recur+Memo
int countTD(int n,int k,int *dp){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    if(dp[n]!=0){
        return dp[n];
    }
    
    int ans=0;
    for(int jump=1;jump<=k;jump++){
        ans+=countTD(n-jump,k,dp);
    }
    return dp[n]=ans;
}

//Bottom Up
int countBT(int n,int k){
    int dp[n+1]={0};
    dp[0]=1;
    
    for(int i=1;i<=n;i++){
        for(int jump=1;jump<=k;jump++){
            if(i-jump>=0){
                dp[i]+=dp[i-jump];
            }
        }
    }
    return dp[n];
}

int main() {
    int n,k;cin>>n>>k;
    int dp[1000]={0};
    cout<<countTD(n,k,dp)<<endl;
    cout<<countR(n,k)<<endl;
    cout<<countBT(n,k);
    //Call Func
	// your code goes here
	return 0;
}
