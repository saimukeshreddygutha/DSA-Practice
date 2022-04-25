class Solution {
public:
    bool binarySearch(vector<int> arr, int l, int h, int val){
        while(l <= h){
            int m = (l + h)/2;
            if(arr[m] == val)return true;
            else if(arr[m] < val)
                l = m + 1;
            else
                h = m - 1;
        }
        return false;
    }
    
    bool checkIfExist(vector<int>& arr) {
        int s = arr.size();
        
        sort(arr.begin(), arr.end());
        
        for(int i = 0;i < s;i++){
            if(arr[i] >= 0){
                if(binarySearch(arr, i+1, s-1, 2*arr[i]))
                    return true;
            }
            else
                if(binarySearch(arr, 0, i-1, 2*arr[i]))
                    return true;
        }
        
        return false;
    }
};
