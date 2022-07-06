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
    
    
    int findInd(vector<int> nums, int i, int j){
        int mx = INT_MIN;
        int mi = -1;
        for(int k = i;k <= j;k++){
            if(mx < nums[k]){
                mx = nums[k];
                mi = k;
            }
        }
        
        return mi;
    }
    
    TreeNode* insert(TreeNode* root, vector<int>nums, int i, int j){
        if(i > j)return root;
        
        
        int ind = findInd(nums, i, j);
        TreeNode* m = new TreeNode(nums[ind]);
        if(root == nullptr)
        {
            root = m;
        }
            
        root -> left = insert(root -> left, nums, i, ind - 1);
        root -> right = insert(root -> right, nums, ind + 1, j);
        return root;
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        
        return insert(nullptr, nums, 0, nums.size() - 1);
    }
};
