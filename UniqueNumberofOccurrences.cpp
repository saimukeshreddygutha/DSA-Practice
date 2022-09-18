class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> u;
        int s = arr.size();
        for(int i = 0;i < s;i++){
            u[arr[i]]++;
        }
        
        unordered_map<int, int>::iterator itr = u.begin();
        unordered_set<int> st;
        for(;itr != u.end();itr++){
            if(st.find(itr -> second) != st.end())return false;
            st.insert(itr -> second);
        }
        
        return true;
    }
};
