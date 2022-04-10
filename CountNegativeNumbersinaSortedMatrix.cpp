class Solution {
public:
    
    int bs(vector<int> a){
        
        
        int l = 0, h = a.size() - 1, pos = 0;
        
        if(a[h] >= 0)return 0;
        while(l <= h){
            int m = (l+h)/2;
            
            if(a[m] < 0){
                pos = m;
                h = m - 1;
                
            }
            else{
                l = m + 1;
            }
        }
    
        return a.size()-pos;
    }
    int countNegatives(vector<vector<int>>& grid) {
        
        int ans = 0;
        int rows = grid.size();
        for(int i= 0; i < rows;i++){
            
            ans += bs(grid[i]);
        }
        
        return ans;
        
    }
};
