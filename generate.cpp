class Solution {
public:
    /*
    https://leetcode.com/problems/pascals-triangle/
    
    */
    
    
    vector<vector<int>> generate(int numRows) {
        vector < vector<int> > ans;
        vector <int> row1={1};
        vector <int> row2={1,1};
        
        ans.push_back(row1);
        if(numRows==1)
            return ans;
        ans.push_back(row2);
        if(numRows==2)
            return ans;
        
        for(int i=2;i<numRows;i++){
            vector<int> row(i+1);
            row[0]=1;
            for(int s=1;s<i;s++){
                row[s]=ans[i-1][s-1]+ans[i-1][s];
            }
            row[i]=1;
            ans.push_back(row);
        }
        return ans;
        
    }
};
