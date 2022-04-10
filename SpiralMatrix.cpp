class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int > ans;
        
        int t = 0, b = matrix.size()-1, l = 0, r = matrix[0].size()-1, d = 0;
        
        while(t <= b && l <= r){
            
            //vector<int> row;
            if(d == 0){
                
                for(int i = l; i <= r;i++){
                    ans.push_back(matrix[t][i]);
                }
                t++;
            }
            else if(d == 1){
                
                for(int i = t; i <= b;i++){
                    ans.push_back(matrix[i][r]);
                }
                r--;
            }
            else if(d == 2){
                for(int i = r; i >= l;i--){
                    ans.push_back(matrix[b][i]);
                }
                b--;
            }
            else if(d == 3){
                for(int i = b; i >= t;i--){
                    ans.push_back(matrix[i][l]);
                }
                l++;
            }
            
            //ans.push_back(row);
            
            d = (d+1)%4;
        }
        
        return ans;
        
    }
};
