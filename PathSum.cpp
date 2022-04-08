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
    bool pathSum(TreeNode* root, int targetSum, int v){
        
        if(root == nullptr)
            return false;
        
        v = root->val + v;
        if(root->left == nullptr && root->right == nullptr)
            return v == targetSum;
        
        if(root -> left == nullptr)
            return pathSum(root->right,targetSum,v);
        if(root-> right == nullptr)
            return pathSum(root->left, targetSum,v);
        
        return pathSum(root->left , targetSum,v)|| pathSum(root->right,targetSum,v);
        
        
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        return pathSum(root, targetSum,0);
    }
};
