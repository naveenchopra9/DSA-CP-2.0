#include<bits/stdc++.h>

using namespace std;

void fileio(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		// freopen("output.txt","w",stdout);
	#endif
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

class point{
	int x,y;
public:
	point(){x=0,y=0; cout<<"Default Constructor!"<<endl;}
	point(int x,int y){
		this->x = x;
		this->y = y;
		cout<<"Parameterized Constructor"<<endl;
	}
	point(point &p){
		x = p.x;
		y = p.y;
		cout<<"Copy Constructor"<<endl;
	}

	void print(){
		cout<<x<<" "<<y<<endl;
	}
};

int main(int argc, char const *argv[])
{
	fileio();
	// point p1;
	// p1.print();
	point p2(1,2);
	// p2.print();
	point p3(p2);
	p3.print();

	return 0;
}


// Encapsulation