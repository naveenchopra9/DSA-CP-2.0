// We are basically storing the increment in the starting position and one past the last index in the range. For a b k we will increase +k for all elements in index [a,b] but then the next elements will not be increased. So we are subtracting it, because w.r.t the previous increment all elements to the right of the range will be lesser by -k. We are basically storing all the final values via this increment/decrement.

// At last we are calculating the elements on the fly from left to right. If you think more deeply, it is just storing how much one element is bigger than the previous element.


#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<vector<int>> q;
	int q;
	cin>>q;
	for(int i=0;i<q;i++){
		
	}
	return 0;
}
