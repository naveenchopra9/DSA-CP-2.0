#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"
#define len(x) x.size()
void IO(){
	ios_base::sync_with_stdio();
	cin.tie(NULL);
	cout.tie(NULL);
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
}

int GCD(int a,int b){
    if(a == 0) return b;
    return GCD(b%a, a);
}

string gcdOfStrings(string str1, string str2) {
       if(str1 + str2 != str2 + str1) return "";
       return str1.substr(0,__gcd(str1.length(),str2.length()));
    }

int getMinSquares(unsigned int n){
    // if n is perfect square.
    if(sqrt(n) - floor(sqrt(n)) == 0){
        return 1;
    }
    if(n <= 3){
        return n;
    }

    int res = n;

    for(int x=1;x<=n;x++){
        int temp = x*x;
        if(temp > n)
            break;
        else
            res = min(res, 1 + getMinSquares(n - temp));
    }

    return res;
}

int minCount(int n)
 
{
 
    int* minSquaresRequired = new int[n + 1];
 
    minSquaresRequired[0] = 0;
 
    minSquaresRequired[1] = 1;
 
    for (int i = 2; i <= n; ++i)
 
    {
 
        minSquaresRequired[i] = INT_MAX;
 
        for (int j = 1; i - (j * j) >= 0; ++j)
 
        {
 
            minSquaresRequired[i]
                = min(minSquaresRequired[i],
                      minSquaresRequired[i - (j * j)]);
        }
 
        minSquaresRequired[i] += 1;
    }
 
    int result = minSquaresRequired[n];
 
    delete[] minSquaresRequired;
 
    return result;
}

void solve(){
    // string A,B;
    // cin>>A>>B;
    // cout<<gcdOfStrings(A,B);
    int n;
    cin>>n;
    cout<<minCount(n);
}

int main(int argc, char const *argv[])
{
	IO();
	int tc;
	cin>>tc;

	while(tc--){
		solve();
	}
	return 0;
}