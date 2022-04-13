#include<bits/stdc++.h>
using namespace std;

int truescore(int a, int b, int c, int d){
	if(c >= a && d >= b)return true;
	return false;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
    	int a, b, c , d;
    	cin>>a>>b;
    	cin>>c>>d;

    	if(truescore(a, b, c ,d))
    		cout<<"POSSIBLE"<<endl;
    	else
    		cout<<"IMPOSSIBLE"<<endl;
    }
}