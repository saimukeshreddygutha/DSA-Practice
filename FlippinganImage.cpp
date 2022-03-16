class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int rn = image.size();
        int cn = image[0].size();
        vector < vector<int> > newimage(rn, vector<int>(cn,0));
        for( int i = 0; i < rn; i++){
            for( int j = 0;j < cn; j++){
                newimage[i][j] = (image[i][cn-1-j]^1);
            }
        }
        return newimage;
    }
};
