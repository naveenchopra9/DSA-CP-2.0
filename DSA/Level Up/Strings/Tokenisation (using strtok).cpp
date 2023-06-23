#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    char input[1000];
    cin.getline(input,1000);
    
    char *token = strtok(input," ");
    
    while(token!=NULL){
        cout<<token<<endl;
        token=strtok(NULL," ");
    }
	// your code goes here
	return 0;
}
