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
    int ans = 0;
    void countGoodNodes(TreeNode* root, int v){
        if(!root)return;
        if(v <= root->val)ans++;
        countGoodNodes(root->left, max(v,root->val));
        countGoodNodes(root->right, max(v,root->val));
    }
    int goodNodes(TreeNode* root) {
        countGoodNodes(root, INT_MIN);
        return ans;
    }
};
