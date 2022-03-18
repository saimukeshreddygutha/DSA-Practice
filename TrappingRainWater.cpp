class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector< int > leftmax(n,0);
        vector <int> rightmax(n,0);
        
        leftmax[0] = height[0];
        rightmax[n-1] = height[n-1];
        
        for(int i = 1;i < n;i++){
            leftmax[i] = max(leftmax[i-1],height[i]);
            rightmax[n-i-1] = max(rightmax[n-i],height[n-i-1]);
        }
        
        int water = 0;
        
        for(int i = 1; i < n-1;i++){
            water += min(leftmax[i],rightmax[i]) - height[i];
        }
        
        return water;
    }
};
