class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        
        int[] a = new int[m];
        
        for(int i = 0;i < m;i++)
            a[i] = nums1[i];
        
        int l1 = 0, l2 = 0, h1 = m - 1, h2 = n - 1;
        int k = 0;
        while(l1 <= h1 && l2 <= h2){
            if(a[l1] <= nums2[l2])
                nums1[k++] =a[l1++];
            else{
                nums1[k++] = nums2[l2++];
            }
        }
        
        while(l1 <= h1){
            nums1[k++] = a[l1++];
        }
        while(l2 <= h2){
            nums1[k++] = nums2[l2++];
        }
        
    }
}
