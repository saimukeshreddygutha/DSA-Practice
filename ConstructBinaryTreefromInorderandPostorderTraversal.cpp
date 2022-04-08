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
    int ind;
    int search(vector <int> in, int ele){
        int len = in.size();
        
        for(int i = 0;i < len;i++){
            if(ele == in[i])
                return i;
        }
        
        return -1;
    }
    
    TreeNode* constructBT(vector<int> in, vector<int>post, int l, int h){
        
        if(l > h)
            return nullptr;
        
        int ele = post[ind--];
        
        int pos = search(in, ele);
        TreeNode* n = new TreeNode(ele);
        n->val = ele;
        
        n->right = constructBT(in, post, pos+1, h);
        n->left = constructBT(in, post, l , pos-1);
        
        
        return n;
        
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
        ind = postorder.size() - 1;
        
        return constructBT(inorder, postorder, 0, postorder.size()-1);
    }
};
