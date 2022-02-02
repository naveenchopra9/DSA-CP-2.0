#include<bits/stdc++.h>

using namespace std;

void fileio(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}


template <typename T>
T maxof(T const &a , T const &b){
	return (a > b ? a : b);
}

int main(int argc, char const *argv[])
{
	fileio();
	cout<<maxof<float>(2.0,3.5)<<endl;
	return 0;
}