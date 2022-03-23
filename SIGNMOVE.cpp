#include<bits/stdc++.h>
using namespace std;

int signmov(int n){

	if(n == 1)
		return -1;
	if((n&1) == 0)
		return n/2;
	return -(n+1)/2;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

    	int n;
    	cin>>n;

    	cout<<signmov(n)<<endl;

    	
    }
}