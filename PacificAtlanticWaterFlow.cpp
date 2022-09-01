class Solution {
public:
    
    
    void dfs(vector<vector<int>> &h, vector<vector<int>> &v, int i, int j, int m, int n){
        
        if(i < 0 || j < 0 || i >= m || j >= n)return;
        
        
        
        v[i][j] = 1;
        if(i > 0 && h[i - 1][j] >= h[i][j] && !v[i - 1][j])dfs(h, v, i - 1, j, m, n);
        if(j > 0 && h[i][j - 1] >= h[i][j] && !v[i][j - 1])dfs(h, v, i, j - 1, m, n);
        if(i < m - 1 && h[i + 1][j] >= h[i][j] && !v[i + 1][j])dfs(h, v, i + 1, j, m, n);
        if(j < n - 1 && h[i][j + 1] >= h[i][j] && !v[i][j + 1])dfs(h, v, i, j + 1, m, n);
        
    }
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& h) {
        
        int r = h.size();
        int c = h[0].size();
        
        vector<vector<int>> ans;
        
        vector<vector<int>> p(r, vector<int>(c, 0));
        vector<vector<int>> a(r, vector<int>(c, 0));
        
        
        for(int i = 0;i < r;i++){
            if(p[i][0] != 1){
                p[i][0] = 1;
                dfs(h, p, i, 0, r, c);
            }
        }
        for(int i = 1;i < c;i++){
            if(p[0][i] != 1){
                p[0][i] = 1;
                dfs(h, p, 0, i, r, c);
            }
        }
        
        for(int i = 0;i < r;i++){
            if(a[i][c - 1] != 1){
                a[i][c - 1] = 1;
                dfs(h, a, i, c - 1, r, c);
            }
        }
        for(int i = 0;i < c - 1;i++){
            if(a[r - 1][i] != 1){
                a[r - 1][i] = 1;
                dfs(h, a, r - 1, i, r, c);
            }
        }
                 
        for(int i = 0;i < r;i++){
            for(int j = 0;j< c;j++){
                if(p[i][j] && a[i][j])ans.push_back({i, j});
                
            }
            
        }
        
                 
        return ans;
    }
};
