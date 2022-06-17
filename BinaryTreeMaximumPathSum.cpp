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
    int ans = INT_MIN;
    int maxPath(TreeNode* root){
        if(root == nullptr)return 0;
        int l = maxPath(root -> left);
        int r = maxPath(root -> right);
        // cout<<l<<r<<endl;
        ans = max(ans, l + r + root -> val);
        return max(0, max(l, r) + root -> val);
    }
    int maxPathSum(TreeNode* root) {
        
        maxPath(root);
        return ans;
        
    }
};
