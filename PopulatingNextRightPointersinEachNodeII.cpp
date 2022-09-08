/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root == nullptr)return root;
        queue<Node*> q1;
        queue<Node*> q2;
        q1.push(root);
        while(!q1.empty() || !q2.empty()){
            
            if(!q1.empty()){
                while(!q1.empty()){
                    Node* n = q1.front();
                    q1.pop();
                    if(n->left != nullptr)q2.push(n->left);
                    if(n->right != nullptr)q2.push(n->right);
                    if(!q1.empty())n->next = q1.front();
                }
            }else{
                while(!q2.empty()){
                    Node* n = q2.front();
                    q2.pop();
                    if(n->left != nullptr)q1.push(n->left);
                    if(n->right != nullptr)q1.push(n->right);
                    if(!q2.empty())n -> next = q2.front();
                }
            }
        }
        
        return root;
    }
};
