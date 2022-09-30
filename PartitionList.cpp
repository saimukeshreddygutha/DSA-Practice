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
    ListNode* partition(ListNode* head, int x) {
        ListNode* first = new ListNode(INT_MAX);
        ListNode* fh = first;
        ListNode* second = new ListNode(INT_MAX);
        ListNode* sh = second;
        while(head != nullptr){
            if(head -> val >= x){second -> next = head;head = head -> next;second = second-> next;second -> next = nullptr;}
            else {first -> next = head; head = head -> next;first = first -> next;first -> next = nullptr;}
            
        }
        if(sh)sh = sh -> next;
        first -> next = sh;
        return fh -> next;
    }
};
