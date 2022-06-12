class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int count[1001];
        fill(count, count + 1001, 0);
        for(auto i : arr1)count[i]++;
        vector<int> ans;
        for(auto i : arr2){
            while(count[i]){
                ans.push_back(i);count[i]--;
            }
        }
        for(int i = 0;i < 1001;i++){
            while(count[i]){
                ans.push_back(i);count[i]--;
            }
        }
        return ans;
    }
};
