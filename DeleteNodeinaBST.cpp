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
    int findmax(TreeNode* root){
        int ele;
        
        while(root != nullptr){
            ele = root->val;
            root = root->right;
        }
        
        return ele;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        
        if(root == nullptr)
            return nullptr;
        if(root->val > key){
            root->left = deleteNode(root->left,key);
        }
        else if(root->val < key){
            root->right = deleteNode(root->right,key);
        }
        else{
            if(root->left == nullptr && root->right == nullptr)
                return nullptr;
            
            if(root->left == nullptr || root->right == nullptr){
                if(root->left == nullptr)
                    return root->right;
                return root->left;
            }
            
            int max = findmax(root->left);
            root->val = max;
            root->left = deleteNode(root->left,max);
            
        }
        return root;
    }
};
