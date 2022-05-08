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
    int findLength(ListNode* head){
        if(!head)return 0;
        return (1+findLength(head->next));
    }
    
    ListNode* swapNodes(ListNode* head, int k) {
        
        int len = findLength(head);
        // cout<<len<<endl;
        k = min(k, len+1-k);
        // if((len&1) == 1 && ((len + 1)/2 == k))return head;
        
        ListNode* p1 = head;
        ListNode* p2 = head;
        k--;
        while(k--){p1 = p1->next;}
        
        // int first_val = p1->val;
        
        ListNode* p3 = p1;
        p1 = p1->next;
        
        while(p1 != nullptr){
            p2 = p2 -> next;
            p1 = p1 -> next;
        }
        
        int tval = p3 -> val;
        p3 -> val = p2 -> val;
        p2 ->val = tval;
        
        
        return head;
        
        
        
    }
};
