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
    priority_queue<int> pq;
    void inorder(TreeNode* root){
        if(root == nullptr)return;
        inorder(root -> left);
        pq.push(-1 * root -> val);
        inorder(root -> right);
        
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        inorder(root1);
        inorder(root2);
        vector<int> ans;
        while(!pq.empty()){ans.push_back(-1*pq.top());pq.pop();}
        
        return ans;
    }
};
