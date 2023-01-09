class Node{
public:
    int val;
    int i;
    int j;

    Node(int val, int i, int j){
        this->val = val;
        this->i = i;
        this->j = j;
    }
};

class Compare{
    public:
     bool operator()(Node* a, Node* b){
        return a->val > b->val;
     }
};

class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        
        priority_queue<Node*, vector<Node*>, Compare> pq;
        int n = nums.size();
        int mn = INT_MAX, mx = INT_MIN;
        for(int i = 0;i < n;i++){
            Node* n = new Node(nums[i][0], i, 0);
            pq.push(n);
            mn = min(mn, nums[i][0]);
            mx = max(mx, nums[i][0]);
        }
        int diff = mx - mn;
        vector<int> ans {mn, mx};

        while(pq.size() == n){
            Node* tn = pq.top();pq.pop();
            int i = tn->i, j = tn->j;
            if((int)nums[i].size() - 1 > j){
                Node* n = new Node(nums[i][j+1], i, j + 1);
                pq.push(n);
                Node* t = pq.top();
                mn = t->val;
                mx = max(mx, n->val);

                if(diff > mx - mn){
                    ans[0] = mn;
                    ans[1] = mx;
                    diff = mx - mn;
                }
            }else break;
        }
        return ans;
    }
};
