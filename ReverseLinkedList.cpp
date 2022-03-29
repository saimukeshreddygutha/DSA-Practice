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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        
        ListNode* t;
        ListNode* temp = head;
        
        if(head == nullptr || head -> next == nullptr)
            return head;
        
        while(temp != nullptr){
            t = temp -> next;
            temp -> next = prev;
            prev = temp;
            temp = t;
        }
        
        return prev;
        
    }
};