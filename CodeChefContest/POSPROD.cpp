#include<bits/stdc++.h>
using namespace std;


int posprod(int a[], int n){
	
	long long int ncount = 0, pcount = 0;

	long long int ans = 0;

	for(int i = 0; i < n;i++){
		if(a[i] > 0){
			pcount += 1;
		}
		else if(a[i] < 0){
			ncount += 1;
		}
	}
	pcount--;
	ncount--;
	ans = pcount*(pcount + 1)/2;
	ans += ncount*(ncount + 1)/2;
	return ans;
}
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
    	int n;
    	cin>>n;

    	int a[n];
    	for(int i = 0;i < n;i++)
    		cin>>a[i];

    	cout<<posprod(a, n)<<endl;
    }
}