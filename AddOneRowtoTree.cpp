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
    void helper(TreeNode* root, int val, int depth, int curDepth){
        
        
        
        if(curDepth + 1 == depth){
            TreeNode* left = root -> left;
            TreeNode* right = root -> right;
            TreeNode* newl = new TreeNode(val);
            TreeNode* newr = new TreeNode(val);
            newl -> left = left;
            newr -> right = right;
            root -> left = newl;
            root -> right = newr;
        }
        if(root -> left != nullptr)
            helper(root -> left, val, depth, curDepth + 1);
        if(root -> right != nullptr)
            helper(root -> right, val, depth, curDepth + 1);
        
        
        
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        
        if(depth == 1){
            TreeNode* left = root;
            TreeNode* newl = new TreeNode(val);
            newl -> left = left;
            root = newl;
            return root;
        }
        
        helper(root, val, depth, 1);
        return root;
    }
};
