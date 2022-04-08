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
    int minD(TreeNode* root, int d){
        
        if(root == nullptr)
            return 0;
        
        if(root->left == nullptr && root->right == nullptr)
            return d;
        
        if(root -> left == nullptr)
            return minD(root->right, d+1);
        
        if(root->right == nullptr)
            return minD(root->left, d+1);
        
        return min(minD(root->left, d+1), minD(root->right, d+1));
        
    }
    
    int minDepth(TreeNode* root) {
        return minD(root, 1);
    }
};
