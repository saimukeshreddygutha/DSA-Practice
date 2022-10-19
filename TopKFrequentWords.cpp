class Compare{
  public:
    bool operator()(pair<int, string> p1, pair<int, string> p2){
        
        if(p1.first == p2.first)return p1.second > p2.second;
        return p1.first < p2.first;
    }
};


class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        unordered_map<string, int> m;
        for(auto i : words)m[i]++;
        
        priority_queue<pair<int, string>, vector<pair<int, string>>, Compare> pq;
        for(auto i : m){
            pq.push(make_pair(i.second, i.first));
            
            
        }
        
        vector<string> ans;
        while(!pq.empty() && k--){
            pair<int, string> p = pq.top();
            
            ans.push_back(p.second);
            pq.pop();
        }
        
        return ans;
    }
};
