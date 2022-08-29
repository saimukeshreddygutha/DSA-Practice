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
    void levelOrder(Node* root){
        queue<Node*> q1;
        queue<Node*> q2;
        if(root != nullptr)q1.push(root);
        while(!q1.empty() || !q2.empty()){
            while(!q1.empty()){
                Node* f = q1.front();q1.pop();
                if(f -> left != nullptr)q2.push(f -> left);
                if(f -> right != nullptr)q2.push(f -> right);
                if(!q1.empty())f -> next = q1.front();
            }
            while(!q2.empty()){
                Node* f = q2.front();q2.pop();
                if(f -> left != nullptr)q1.push(f -> left);
                if(f -> right != nullptr)q1.push(f -> right);
                if(!q2.empty())f -> next = q2.front();
            }
        }
        
    }
    Node* connect(Node* root) {
        levelOrder(root);
        return root;
    }
};
