#include<bits/stdc++.h>
using namespace std;

void avgarr(int n, int x){

	vector< int >a(n, x);
	int l = 0, h = n - 1;
	int k = 1;
	while(l < h){
		a[l] = x - k;
		a[h] = x + k;
		k++;
		l++;
		h--;
	}

	for(int i = 0;i < n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
    	int n, x;
    	cin>>n>>x;

    	avgarr(n, x);
    }
}