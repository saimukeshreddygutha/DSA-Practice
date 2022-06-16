/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        if(!head)return nullptr;
        int i = 0;
        unordered_set<ListNode*> s;
        while(head != nullptr){
            if(s.find(head) != s.end())return head;
            else s.insert(head);
            head = head -> next;
        }
        
        return nullptr;
    }
};
