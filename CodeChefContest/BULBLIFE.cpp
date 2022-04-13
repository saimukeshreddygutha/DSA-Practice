#include<bits/stdc++.h>
using namespace std;


int bulblife(int n, int x){
	int s = 0;

	for(int i = 0;i < n-1;i++ ){
		int a;
		cin>>a;
		s += a;
	}

	if(x*n - s <= 0)return 0;

	return x*n - s;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
    	int n, x;
    	cin>>n>>x;

    	cout<<bulblife(n, x)<<endl;
    	


    }
}