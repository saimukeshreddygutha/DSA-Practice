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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(INT_MIN);

        ListNode* dh = dummy;
        dummy->next = head;
        ListNode* th = dummy;

        ListNode* cur = head;
        while(cur && cur->next){
            if(cur->val == cur->next->val){
                int k = cur->val;
                while(cur && cur->val == k)cur = cur->next;
                th->next = cur;
            }
            else if(cur){
                th = cur;
                cur = cur->next;
            }
            
        }

        return dh->next;
    }
};
