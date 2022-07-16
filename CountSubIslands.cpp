class Solution {
public:
    bool res;
    void mark_current_island(vector<vector<int>>& grid1, vector<vector<int>>& grid2,int x,int y,int r,int c){
        if(x<0 || x>=r || y<0 || y>=c || grid2[x][y]!=1) 
            return ;
        

        if(grid1[x][y]==0){
            res=false;
            return;
        }
        grid2[x][y] = 0;
        

        mark_current_island(grid1,grid2,x+1,y,r,c);
        mark_current_island(grid1,grid2,x,y+1,r,c); 
        mark_current_island(grid1,grid2,x-1,y,r,c);  
        mark_current_island(grid1,grid2,x,y-1,r,c); 
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
 
        
        int rows = grid1.size();
        if(rows==0)     
            return 0;
        int cols = grid1[0].size();
		

        int no_of_islands = 0;
		

        for(int i=0;i<rows;++i){
            for(int j=0;j<cols;++j){
                if(grid2[i][j]==1){
                    res=true;
                    mark_current_island(grid1,grid2,i,j,rows,cols);
                    
                    if(res)
                        no_of_islands += 1;
                }
            }
        }
		
        return no_of_islands;
    }
};
