class Solution {
public:
    
    vector<int> numMovesStones(int a, int b, int c) {
        int mn_moves;
        int mx_moves;
        vector<int> arr={a,b,c};
        sort(arr.begin(), arr.end());
        int mn = arr[0];
        int md = arr[1];
        int mx = arr[2];
        
        if(mx - mn == 2)mn_moves = 0;
        else if(mx - md <= 2 || md - mn <= 2)mn_moves = 1;
        else mn_moves = 2;
        
        mx_moves = mx - mn - 2;
        vector<int> ans={mn_moves, mx_moves};
        return ans;
    }
};
