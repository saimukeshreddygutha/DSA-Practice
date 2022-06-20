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
    bool isPalindrome(ListNode* head) {
        if(head -> next == nullptr)return head;
        ListNode *f = head, *s = head, *start = head;
        while(f != nullptr && f -> next != nullptr){
            f = f -> next -> next;
            s = s -> next;
        }
        
        ListNode* pre = nullptr;
        
        while(s != nullptr){
            ListNode* t = s -> next;
            s -> next = pre;
            pre = s;
            s = t;
        }
        
        while(pre != nullptr && start != nullptr){
            if(pre -> val != start -> val)return false;
            pre = pre -> next;
            start = start -> next;
        }
        return true;
    }
};
