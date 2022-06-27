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
    
    vector< vector<int> > ans;
    
    void path(TreeNode* root, int t, int v, vector<int> rowans){
        if(root == nullptr)return;
        if(root -> left == nullptr && root -> right == nullptr && v + root ->val == t){
            rowans.push_back(root -> val);
            ans.push_back(rowans);
            return;
        }
        
        rowans.push_back(root -> val);
        path(root -> left, t, v + root -> val, rowans);
        path(root -> right, t, v + root -> val, rowans);
        
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int t) {
        path(root, t, 0, {});
        return ans;
    }
};
