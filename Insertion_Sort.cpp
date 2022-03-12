#include<bits/stdc++.h>
using namespace std;

void display(int a[], int n){

	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;

}

void insertsort(int a[],int n){

	for(int j=1;j<n;j++){

		int i=j-1;
		int key=a[j];

		while(a[i]>key && i>=0){

			a[i+1]=a[i];
			i--;
		}

		a[i+1]=key;
	}

}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
    	cin>>a[i];

    display(a,n);

    insertsort(a,n);

    display(a,n);

}
