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
    bool sym(TreeNode* lroot, TreeNode* rroot){
        
        if(lroot == nullptr && rroot == nullptr)return true;
        
        if(lroot == nullptr)return false;
        
        if(rroot==nullptr)return false;
        
        return (lroot->val == rroot->val) && sym(lroot->left,rroot->right) && sym(lroot->right, rroot->left);
    }
    
    bool isSymmetric(TreeNode* root) {
         
        return sym(root->left, root->right);
    }
};
