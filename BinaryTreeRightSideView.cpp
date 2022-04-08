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
    
    unordered_set<int> levels;
    vector<int> ans;
    void rv(TreeNode* root, int l){
        
        if(root == nullptr)
            return;
        
        if(!levels.count(l)){
            ans.push_back(root->val);
            levels.insert(l);
        }
        rv(root->right,l+1);
        rv(root->left, l+1);
        
    }
    
    vector<int> rightSideView(TreeNode* root) {
        rv(root,0);
        return ans;
    }
};
