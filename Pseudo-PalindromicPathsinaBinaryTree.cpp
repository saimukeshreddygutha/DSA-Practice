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
    void preOrder(TreeNode* root, int count){
        if(root == nullptr)return;
        count ^= (1<<(root -> val));
        if(!root -> left && !root -> right)ans += ((count&(count - 1)) == 0);
        preOrder(root -> left, count);
        preOrder(root -> right, count);
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        ans = 0;
        preOrder(root, 0);
        return ans;
    }
};
