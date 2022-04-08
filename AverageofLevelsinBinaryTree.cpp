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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans1;
        int m = 100000;

        
        queue <TreeNode* > q1,q2;
        
        q1.push(root);
        
        while(!q1.empty() || !q2.empty()){
            int len = 0;
            long long int sum = 0;
            if(!q1.empty()){
                while(!q1.empty()){
                    
                    TreeNode* t = q1.front();
                    q1.pop();
                    sum = (sum+(t->val));
                    if(t->left != nullptr)
                        q2.push(t->left);
                    if(t->right != nullptr)
                        q2.push(t->right);
                    len++;
                }
            }
            else{
                while(!q2.empty()){
                    //vector< int > row;
                    TreeNode* t = q2.front();
                    q2.pop();
                    sum = (sum+(t->val));
                    if(t->left != nullptr)
                        q1.push(t->left);
                    if(t->right != nullptr)
                        q1.push(t->right);
                    len++;
                }
            }
            ans1.push_back(sum*1.0/len*1.0);
        }
        
        return ans1;
    
    }
};
