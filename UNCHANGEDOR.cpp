#include<bits/stdc++.h>
using namespace std;

int numofpowersoftwolessthanoreqn(int n){

	int ans = 0;
	int i = 2;

	while((1<<i) <= n ){
		ans++;
		i++;
	}

	return ans;
}


int unchangedor(int n){
	if(n == 2)
		return 0;

	return n-numofpowersoftwolessthanoreqn(n)-2;


}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
    	int n;
    	cin>>n;

    	cout<<unchangedor(n)<<endl;

    }
}