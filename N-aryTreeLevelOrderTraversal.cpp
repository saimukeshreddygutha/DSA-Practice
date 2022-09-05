/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        
        vector<vector<int>> ans;
        queue<Node*> q1;
        queue<Node*> q2;
        if(root != nullptr)q1.push(root);
        while(!q1.empty() || !q2.empty()){
            vector<int> v;
            if(!q1.empty()){
                while(!q1.empty()){
                    Node* t = q1.front();
                    v.push_back(t -> val);
                    q1.pop();
                    vector<Node*> temp = t -> children;
                    for(auto i = temp.begin();i != temp.end();i++){
                        if(*i != nullptr)q2.push(*i);
                    }
                }
            }else{
                while(!q2.empty()){
                    Node* t = q2.front();
                    v.push_back(t -> val);
                    q2.pop();
                    vector<Node*> temp = t -> children;
                    for(auto i = temp.begin();i != temp.end();i++){
                        if(*i != nullptr)q1.push(*i);
                    }
                }
            }
            ans.push_back(v);
        }
        
        return ans;
        
    }
};
