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
    vector<TreeNode*> v;
    unordered_map<string, int> m;
    string serializeSubstring(TreeNode* root){
        if(!root)return ".";
        string left = serializeSubstring(root->left);
        string right = serializeSubstring(root->right);
        string ans = left+ "," + right+ ","+to_string(root->val);
        if(m[ans] == 1)v.push_back(root);
        m[ans]++;
        return ans;

    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        v.clear();
        serializeSubstring(root);
        return v;
    }
};
