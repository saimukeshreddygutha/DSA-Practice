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
    int level(TreeNode* root, int l){
        if(root == nullptr)return l;
        return max(l, max(level(root -> left, l + 1), level(root -> right, l + 1)));
    }
    
    int ans = 0;
    void findAns(TreeNode* root, int l, int m){
        if(root == nullptr)return;
        if(l == m-1)ans += root->val;
        findAns(root -> left, l + 1, m);
        findAns(root -> right, l + 1, m);
    }
    
    int deepestLeavesSum(TreeNode* root) {
        int maxlevel = level(root, 0);
        findAns(root, 0, maxlevel);
        return ans;
    }
};
