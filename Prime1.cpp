#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define si(n) scanf("%d", &n)
#define sl(l)	scanf("%lld",&l)
#define ss(s)	cin>>s
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	cout<<s<<"\n"
#define debug(x) cout<< #x <<" = "<<x<<"\n"
#define endl "\n"



typedef vector< int > vi;
typedef vector< char > vc;
typedef vector< string > vs;
typedef vector< ll > vll;
typedef vector< float > vf;
typedef vector< vi > vvi;
typedef vector< vll > vvll;


const int m = 3e5;

bool isprime(int n){
	if(n < 2)return false;
	for(int i = 2;i <= (int)(sqrt(n));i++)
		if((n % i) == 0)return false;
	return true;
}


vi getSieve(int b){
	vi ans;
	for(int i = 2;i < b;i++)
		if(isprime(i))ans.push_back(i);
	return ans;
}

void generateAndPrint(long a, long b){
	bool prime[b - a + 1];
	fill(prime, prime + b - a + 1, true);
	if(a == 1)prime[0] = false;
	vi sieve = getSieve((int)(sqrt(b) + 1));
	for(auto i : sieve){
		long x = (a - (a % i)) + i;
		if((a%i) == 0)x = a;
		if(x == i)x += i;
		for(int j = x;j <= b;j += i)
			prime[j - a] = false;
	}

	for(int i = 0;i < b - a + 1;i++){
		if(prime[i])
			cout<<i + a<<endl;
	}
	// cout<<endl;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
    	long a, b;
    	cin>>a>>b;
    	generateAndPrint(a, b);
    	if(t != 0)
    	cout<<endl;
    }
}
