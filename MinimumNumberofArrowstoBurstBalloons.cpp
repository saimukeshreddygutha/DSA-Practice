class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        
        int n = points.size();
        if(!n)return 0;
        sort(points.begin(), points.end());
        int ans = 1;
        int last = points[0][1];
        for(int i = 1;i < n;i++){
            if(points[i][0] > last){
                last = points[i][1];
                ans++;
            }else last = min(last, points[i][1]);
        }

        return ans;
    }
};
