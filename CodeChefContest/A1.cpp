#include<bits/stdc++.h>
using namespace std;

bool issubsetsum(int a[], int n,long long int m){

	if(m == 0)
		return true;

	for(int i = 1;i < (1<<n);i++){

		long long int sum = 0;

		for(int j = 0;j < n;j++){
			if(i&(1<<j))
				sum += a[j];
		}

		if(sum == m)
			return true;
	}
	return false;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

    	int n;
    	long long int m;
    	cin>>n>>m;

    	int a[n];
    	bool flag = false;
    	for(int i = 0;i < n;i++){
    		cin>>a[i];
    	}

    	if(issubsetsum(a,n,m))
    		cout<<"Yes"<<endl;
    	else
    		cout<<"No"<<endl;


    }
}