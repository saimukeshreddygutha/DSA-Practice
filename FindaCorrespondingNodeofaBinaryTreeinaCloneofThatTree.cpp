/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* ans;
    void pre(TreeNode* o, TreeNode* c, TreeNode* t){
        
        if(o == nullptr)return;
        pre(o->left, c->left, t);
        if(o == t)ans = c;
        pre(o->right, c->right, t);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        pre(original, cloned, target);
        return ans;
    }
};
