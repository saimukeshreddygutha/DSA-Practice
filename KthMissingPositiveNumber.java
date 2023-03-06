class Solution {
    public int findKthPositive(int[] arr, int k) {
        int n = arr.length;
        int j = 0;
        for(int i = 1;i < 2001;i++){
            
            if(j < n){
                if(arr[j] == i)j++;
                else k--;
            }else k--;
            if(k == 0)return i;
        }

        return -1;
    }
}
