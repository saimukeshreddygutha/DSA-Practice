class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector< vector <int> > ans(n, vector<int>(n,0));
        
        int val = 1;
        
        int t = 0, b = n-1, l = 0, r = n-1, d = 0;
        
        while(t <= b && l <= r){
            
            //vector<int> row;
            if(d == 0){
                
                for(int i = l; i <= r;i++){
                    ans[t][i] = val++;
                }
                t++;
            }
            else if(d == 1){
                
                for(int i = t; i <= b;i++){
                    ans[i][r] = val++;
                }
                r--;
            }
            else if(d == 2){
                for(int i = r; i >= l;i--){
                    ans[b][i] = val++;
                }
                b--;
            }
            else if(d == 3){
                for(int i = b; i >= t;i--){
                    ans[i][l] = val++;
                }
                l++;
            }
            
            //ans.push_back(row);
            
            d = (d+1)%4;
        }
        
        return ans;
        
    }
};
