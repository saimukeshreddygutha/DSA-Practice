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
    
    int s = 0;
    int sum(TreeNode* root, int v){
        
        
        v = v*10 + root->val;
        
        if(root->left == nullptr && root->right == nullptr){
            //s += v;
            return v;
        }
        
        if(root->left == nullptr)
            return sum(root->right, v);
        if(root->right == nullptr)
            return sum(root->left, v);
        
        return sum(root->right,v)+sum(root->left, v);
    }
    int sumNumbers(TreeNode* root) {
        
        s=0;
        return sum(root, 0);
    }
};
