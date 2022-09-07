class Solution {
public:
    static string tree2str(const TreeNode* root) {
        string ans;
        tree2Str(root, ans);
        return ans;
    }
    static void tree2Str(const TreeNode* node, string& ans) {
        if (!node) return;   
        ans += to_string(node->val);
        if (node->left) { 
            ans += '(';
            tree2Str(node->left, ans);
            ans += ')';
        }
        if (node->right) { 
            if (!node->left) ans += "()";
            ans += '(';
            tree2Str(node->right, ans);
            ans += ')';
        }
    }
};
