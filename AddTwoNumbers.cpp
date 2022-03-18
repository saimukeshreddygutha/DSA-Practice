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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int num1 = 0, num2 = 0;
        ListNode* temp1 = l1;
        
        ListNode* temp2 = l2;
        ListNode* nw = new ListNode();
        int carry = 0;
        int s = temp1->val + temp2->val;
        if(s<10){
            nw->val = s;
        }
        else{
            carry = 1;
            nw->val = s%10;
        }
        temp1 = temp1->next;
        temp2 = temp2 -> next;
        
        ListNode* temp3 = nw;
        while(temp1 != nullptr && temp2 != nullptr){
            int s = temp1->val + temp2->val + carry;
            if(s<10){
                ListNode* t = new ListNode(s);
                temp3 -> next = t;
                temp3 = temp3 -> next;
                carry = 0;
            }
            else{
                carry = 1;
                ListNode* t = new ListNode(s%10);
                temp3 -> next = t;
                temp3 = temp3 -> next;
            }
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }
        
        while(temp1 != nullptr){
            int s = temp1->val + carry;
            if(s < 10){
                ListNode* t = new ListNode(s);
                temp3 -> next = t;
                temp3 = temp3 -> next;;
                carry = 0;
            }
            else{
                carry = 1;
                ListNode* t = new ListNode(s%10);
                temp3 -> next = t;
                temp3 = temp3->next;
            }
            temp1 = temp1 -> next;
        }
        
        while(temp2 != nullptr){
            int s = temp2->val + carry;
            if(s < 10){
                ListNode* t = new ListNode(s);
                temp3 -> next = t;
                temp3 = temp3 -> next;
                carry = 0;
            }
            else{
                carry = 1;
                ListNode* t = new ListNode(s%10);
                temp3 -> next = t;
                temp3 = temp3 -> next;
            }
            temp2 = temp2 -> next;
        }
        
        if(carry){
            ListNode* t = new ListNode(1);
            temp3 -> next = t;
        }
        
        return nw;
        
    }
};
