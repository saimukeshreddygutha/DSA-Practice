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

    
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        vector< vector <int> > ans;
        if(root == nullptr)
            return ans;
        
        queue <TreeNode* > q1,q2;
        
        q1.push(root);
        
        while(!q1.empty() || !q2.empty()){
            vector< int > row;
            if(!q1.empty()){
                while(!q1.empty()){
                    
                    TreeNode* t = q1.front();
                    q1.pop();
                    row.push_back(t->val);
                    if(t->left != nullptr)
                        q2.push(t->left);
                    if(t->right != nullptr)
                        q2.push(t->right);
                }
            }
            else{
                while(!q2.empty()){
                    //vector< int > row;
                    TreeNode* t = q2.front();
                    q2.pop();
                    row.push_back(t->val);
                    if(t->left != nullptr)
                        q1.push(t->left);
                    if(t->right != nullptr)
                        q1.push(t->right);
                }
            }
            ans.push_back(row);
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
        
        
        
    }
};
