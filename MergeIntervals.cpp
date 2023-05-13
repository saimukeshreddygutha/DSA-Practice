class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> ans;
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        int i = 0;
        while(i < n){
            vector<int> b;
            b.push_back(intervals[i][0]);
            int second = intervals[i][1];
            int j = i + 1;
            while(j < n && second >= intervals[j][0]){
                second = max(intervals[j][1], second);
                j++;
            }
            j -= 1;
            b.push_back(second);
            ans.push_back(b);
            i = j + 1;
        }
        return ans;
    }
};
