#include<bits/stdc++.h>
using namespace std;

int apowern(int a, int n){
	int ans = 1;

	while(n > 0){
		if((n&1) == 1){
			ans *= a;
		}

		a *= a;
		n = n>>1;
	}

	return ans;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, n;
    cin>>a>>n;

    int ans = apowern(a,n);
    cout<<ans;
}
