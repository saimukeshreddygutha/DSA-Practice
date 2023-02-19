/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        deque<pair<TreeNode*, int>> d1;
        deque<pair<TreeNode*, int>> d2;
        vector<vector<int>> ans;
        if(!root)return ans;
        d1.push_back({root, 0});

        while(!d1.empty() || !d2.empty()){
            vector<int> r;
            int cl = -1;
            if(!d1.empty()){
                while(!d1.empty()){
                    pair<TreeNode*, int> t = d1.front();
                    TreeNode* tn = t.first;
                    int vl = t.second;
                    cl = vl;
                    r.push_back({tn->val});
                    d1.pop_front();
                    
                    if(tn->left)d2.push_back({tn->left, vl+1});
                    if(tn->right)d2.push_back({tn->right, vl+1});
                }
            }else{
                while(!d2.empty()){
                    pair<TreeNode*, int> t = d2.front();
                    TreeNode* tn = t.first;
                    int vl = t.second;
                    cl = vl;
                    d2.pop_front();
                    r.push_back(tn->val);
                    if(tn->left)d1.push_back({tn->left, vl + 1});
                    if(tn->right)d1.push_back({tn->right, vl+1});
                }
            }
            if(cl&1)reverse(r.begin(), r.end());
            ans.push_back(r);
            
        }
        return ans;
    }
};
