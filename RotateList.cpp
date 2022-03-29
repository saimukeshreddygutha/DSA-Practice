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
    ListNode* rotateRight(ListNode* head, int k) {
        
        ListNode* temp = head;
        
        if(head == nullptr)return head;
        
        int len = 0;
        while( temp -> next != nullptr){
            temp = temp -> next;
            len++;
        }
        len++;
        if(k == 0 || k == len || len == 1)
            return head;
        temp -> next = head;
        
        temp = head;
        k = k%len;
        
        int pos = len - k -1;
        
        while(pos > 0){
            temp = temp -> next;
            pos --;
        }
        
        head = temp ->next;
        temp -> next = nullptr;
        
        return head;
        
    }
};