class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector < vector<int> > ans;
        vector <int> row1={1};
        vector <int> row2={1,1};
        
        if(rowIndex == 0)
            return row1;
        if(rowIndex == 1)
            return row2;
        
        ans.push_back(row1);
        ans.push_back(row2);
        
        for(int i = 2;i <= rowIndex;i++){
            vector<int> nrow(i+1,1);
            for(int j = 1;j < i;j++){
                nrow[j] = ans[i-1][j-1]+ans[i-1][j];
            }
            ans.push_back(nrow);
        }
        return ans[rowIndex];

    }
};
