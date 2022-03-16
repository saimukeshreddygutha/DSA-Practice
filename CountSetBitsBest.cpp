#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n;
    cin>>n;

    int ans = 0;

    while(n!=0){
    	ans++;
    	n = (n&(n-1));
    }

    cout<<ans;
}
