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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* d = new ListNode(-1);
        d->next = head;

        ListNode* h = d;
        while(d->next){
            if(d->next->val == val)d->next = d->next->next;
            else d = d->next;

        }
        return h->next;
    }
};
