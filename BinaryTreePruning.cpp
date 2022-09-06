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
    
    bool containsOne(TreeNode* root){
        
        if(root == nullptr)return false;
        
        bool leftContains = containsOne(root -> left);
        bool rightContains = containsOne(root -> right);
        
        if(!leftContains)root -> left = nullptr;
        if(!rightContains)root -> right = nullptr;
        
        return root -> val == 1 || leftContains || rightContains;
    }
    
    TreeNode* pruneTree(TreeNode* root) {
        
        if(root == nullptr)return root;
        
        containsOne(root);
        if(root -> val != 1 && root -> left == nullptr && root -> right == nullptr)return nullptr;
        return root;
        
    }
};
