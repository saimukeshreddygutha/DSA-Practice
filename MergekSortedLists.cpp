/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* head = new ListNode(INT_MIN + 2);
        ListNode* thead = head;
        priority_queue<pair<int, ListNode*>> pq;
        int k = lists.size();
        if(k == 0)return nullptr;
        for(int i = 0;i < k;i++){
            ListNode* tl = lists[i];
            if(tl != nullptr)pq.push(make_pair(-1 * (tl->val), tl));
        }
        
        while(!pq.empty()){
            pair<int, ListNode*> p = pq.top();
            ListNode* s = p.second;
            thead -> next = s;
            thead = s;
            pq.pop();
            
            if(s -> next != nullptr)pq.push(make_pair(-1 * (s -> next -> val), s -> next));
        }
        
        // if(thead -> val == INT_MIN)return nullptr;
        
        thead -> next = nullptr;
        return head -> next;
        
    }
};
