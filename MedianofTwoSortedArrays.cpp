class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> all(n1+n2,0);
        
        int i=0,j=0,k=0;
        
        while(i<n1 && j<n2){
            if(nums1[i]<nums2[j])
                all[k++] = nums1[i++];
            else
                all[k++]=nums2[j++];
        }
        while(i < n1)
            all[k++]=nums1[i++];
        
        while(j < n2)
            all[k++] = nums2[j++];
        
        if((n1+n2)&1==1){
            return (double)all[(n1+n2)/2]*1.0;
        }
        return (double)((all[(n1+n2)/2 - 1]+all[(n1+n2)/2])/2.0);
        
    }
};
