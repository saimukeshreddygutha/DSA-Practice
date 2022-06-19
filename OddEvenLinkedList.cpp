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
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr || head -> next == nullptr || head -> next -> next == nullptr)return head;

        ListNode *odd = head, *eve = head -> next;
        ListNode *odd_h = odd, *eve_h = eve;
        while(eve != nullptr && eve -> next != nullptr){
            odd -> next = odd -> next -> next;
            odd = odd -> next;
            eve -> next = eve -> next -> next;
            eve = eve -> next;
        }
        odd -> next = eve_h;
        return odd_h;
    }
};
