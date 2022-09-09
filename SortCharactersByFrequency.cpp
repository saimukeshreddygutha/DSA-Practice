class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> m;
        int l = s.size();
        for(int i = 0;i < l;i++){
            m[s[i]]++;
        }
        priority_queue<pair<int, char>> pq;
        unordered_map<char, int> :: iterator itr;
        for(itr = m.begin();itr != m.end();itr++){
            pq.push(make_pair(itr -> second, itr -> first));
        }
        
        string ans = "";
        while(!pq.empty()){
            pair<int, char> t = pq.top();
            pq.pop();
            int n = t.first;
            char c = t.second;
            while(n--)ans += c;
        }
        
        return ans;
        
        
    }
};
