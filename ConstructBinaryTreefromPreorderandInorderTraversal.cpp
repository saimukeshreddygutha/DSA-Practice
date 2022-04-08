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
    int ind = 0;
    int search(vector <int> in, int ele){
        int len = in.size();
        
        for(int i = 0;i < len;i++){
            if(ele == in[i])
                return i;
        }
        
        return -1;
    }
    
    TreeNode* constructBT(vector<int> pre, vector<int>in, int l, int h){
        
        if(l > h)
            return nullptr;
        
        int ele = pre[ind++];
        
        int pos = search(in, ele);
        TreeNode* n = new TreeNode(ele);
        n->val = ele;
        
        n->left = constructBT(pre, in, l , pos-1);
        n->right = constructBT(pre, in, pos+1, h);
        
        return n;
        
    
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        ind = 0;

        return constructBT(preorder, inorder, 0, preorder.size()-1);// passing size gives runtime error
    }
};
