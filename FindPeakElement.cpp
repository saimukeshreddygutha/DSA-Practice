class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        
        int h = arr.size() - 1;
        int l = 0;
        
        
        while(l < h){
            int m = (l + h)/2;
            if(arr[m] < arr[m + 1])
                l = m + 1;
            else
                h = m;
        }
        
        return l;
    }
};
