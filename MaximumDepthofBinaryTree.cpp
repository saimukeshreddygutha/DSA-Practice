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
    
    int mD(TreeNode* root, int d){
        if(root == nullptr)
            return d;
        
        return max(mD(root->left,d+1),mD(root->right,d+1));
    }
    
    int maxDepth(TreeNode* root) {
        
        return mD(root, 0);
    }
};
