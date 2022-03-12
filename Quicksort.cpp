#include<bits/stdc++.h>
using namespace std;

void display(int a[], int n){

	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;

}

void swap(int a[],int i, int j){

	int temp=a[i];
	a[i]=a[j];
	a[j]=temp;


}
int partiton(int a[], int low, int high){

	int pivot = a[low];
	int i=low+1;
	int j=high;

	while(i<j){
		while(pivot>a[i])
			i++;
		while(pivot<a[j])
			j--;
		if(i<j){
			swap(a,i,j);
		}
	}

	swap(a,low,j);
	return j;

}


void quicksort(int a[],int low, int high){

	if(low<high){

		int j = partiton(a,low,high);

		quicksort(a,low,j-1);

		quicksort(a,j+1,high);
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

    quicksort(a,0,n-1);

    display(a,n);

}
