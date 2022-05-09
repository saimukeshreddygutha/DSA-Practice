class Solution {
public:
    int uniquePaths(int m, int n) {
        if(m == 1 && n == 1)return 1;
        vector< vector<long> > a(m, vector<long>(n, 1));
        a[0][0] = 0;
        for(int i = 1;i < m;i++){
            for(int j = 1;j < n;j++){
                a[i][j] = a[i][j-1] + a[i-1][j];
            }
        }
        
        return a[m-1][n-1];
    }
};
