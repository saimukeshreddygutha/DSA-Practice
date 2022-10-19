class Compare{
  public:
    bool operator()(pair<int, vector<int>> p, pair<int, vector<int>> q){
        return p.first > q.first;
    }
};

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        priority_queue<pair<int, vector<int>>, vector<pair<int, vector<int>>>, Compare> pq;
        
        for(auto i : points){
            pq.push(make_pair(i[0]*i[0] + i[1]*i[1], i));
        }
        vector<vector<int>> ans;
        while(!pq.empty() && k--){
            pair<int, vector<int>> p = pq.top();
            pq.pop();
            ans.push_back(p.second);
        }
        
        return ans;
    }
};
