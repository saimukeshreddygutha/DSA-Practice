#include<bits/stdc++.h>
using namespace std;

int max_sum_centre(int price_diff[], int low, int mid, int high){

	int leftsum=INT_MIN;
	int rightsum=INT_MIN;

	int sum=0;
	for(int i=mid;i>=low;i--){

		sum+=price_diff[i];
		if(sum>leftsum)
			leftsum = sum;
	}

	//cout<<"\nleftsum : "<<leftsum<<endl;

	sum=0;

	for(int i=mid+1;i<=high;i++){
		
		sum+=price_diff[i];
		if(sum>rightsum)
			rightsum=sum;
	}

	//cout<<"\nrightsum : "<<rightsum<<endl;

	return leftsum+rightsum;
}

int max_sum_subarray(int price_diff[],int low,int high){

	if(low==high)
		return price_diff[low];

	int mid = (low+high)/2;

	int left_subarray_maxsum = max_sum_subarray(price_diff,low,mid);

	int right_subarray_maxsum = max_sum_subarray(price_diff,mid+1,high);

	int centre_subarray_maxsum = max_sum_centre(price_diff,low,mid,high);

	return max(max(left_subarray_maxsum,right_subarray_maxsum), centre_subarray_maxsum);
}


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int stock_prices[n];
    for(int i=0;i<n;i++)
    	cin>>stock_prices[i];

    int price_diff[n];

    for(int i=1;i<n;i++)
    	price_diff[i] = stock_prices[i] - stock_prices[i-1];

    int ans = max_sum_subarray(price_diff,1,n-1);

    cout<<ans<<endl;

}