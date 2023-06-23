// We are basically storing the increment in the starting position and one past the last index in the range. For a b k we will increase +k for all elements in index [a,b] but then the next elements will not be increased. So we are subtracting it, because w.r.t the previous increment all elements to the right of the range will be lesser by -k. We are basically storing all the final values via this increment/decrement.

// At last we are calculating the elements on the fly from left to right. If you think more deeply, it is just storing how much one element is bigger than the previous element.


/*
10
3
1 5 3
4 8 7
6 9 1

ans : 10
*/


#include<bits/stdc++.h>

using namespace std;

void fileio(){
	freopen("input.txt","r",stdin);
}

int arrayManipulation(int n,vector<vector<int>> &queries){
	vector<int> arr(n,0);
	for(auto &q : queries){
		int l = q[0];
		int r = q[1];
		int x = q[2];

		arr[l-1] += x;
		if(r < n){
			arr[r] -= x;
		}
	}

	int ans = 0,currMx = 0;
	for(auto &x : arr){
		currMx += x;
		ans = max(ans,currMx);
	}

	return ans;
}

int main(int argc, char const *argv[])
{
	fileio();
	int n;
	cin>>n;
	vector<vector<int>> q;
	int m;
	cin>>m;
	for(int i=0;i<m;i++){
		int l,r,m;
		cin>>l>>r>>m;
		q.push_back({l,r,m});
	}

	cout<<arrayManipulation(n,q);
	return 0;
}
