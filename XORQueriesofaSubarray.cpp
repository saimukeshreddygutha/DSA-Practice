class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries){
        int len = arr.size();
        vector<int>a(len, 0);
        vector<int> ans;
        a[0] = arr[0];
        for(int i = 1;i < len;i++){
            a[i] = a[i - 1] ^ arr[i];
        }
        for(int i = 0;i < queries.size();i++){
            if(queries[i][0] == 0)ans.push_back(a[queries[i][1]]);
            else ans.push_back(a[queries[i][1]] ^ a[queries[i][0] - 1]);
        }
        return ans;
    }
};
