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
    TreeNode* createBST(vector<int> nums, int left, int right){
        if(right < left)return nullptr;
        int m = (left + right)/2;
        TreeNode* n = new TreeNode(nums[m]);
        n->left = createBST(nums, left, m-1);
        n->right = createBST(nums,m+1, right);
        
        return n;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        return createBST(nums, 0, nums.size()-1);
    }
};
