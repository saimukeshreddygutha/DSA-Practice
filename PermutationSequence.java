class Solution {

    String ans="";
    int count;
    public void permute(int[] arr, int k, int idx, int[] vi, int n){

        if(idx == n){
            count++;
            if(k==count){
                for(int i = 0;i < n;i++)ans += arr[i];
            }
            return;
        }

        for(int i = 1;i <= n;i++){
            if(vi[i] != 1){
                arr[idx] = i;
                vi[i] = 1;
                permute(arr, k, idx+1, vi, n);
                vi[i] = 0;
            }
            
        }

    }
    public String getPermutation(int n, int k) {
        
        int[] arr = new int[n];
        int[] vi = new int[n+1];
        count = 0;
        permute(arr, k, 0, vi, n);

        return ans;
    }
}
