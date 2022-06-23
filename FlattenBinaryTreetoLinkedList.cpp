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
    void flatten(TreeNode* root) {
        
        if(root == nullptr)return;
        stack<TreeNode*> s;
        s.push(root);
        
        while(!s.empty()){
            TreeNode *t = s.top();s.pop();
            if(t -> right != nullptr)s.push(t -> right);
            if(t -> left != nullptr)s.push(t -> left);
            
            if(!s.empty()){
                t -> right = s.top();
            }
            t -> left = nullptr;
        }
    }
};
