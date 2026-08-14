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
    ListNode* deleteMiddle(ListNode* head) {
        #define node ListNode
        node* a = head;
        node* slow = head;
        node* fast = head;

        while(fast != NULL && fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        if(head->next == NULL) return NULL;
        while(head->next!=slow){
            head = head->next;
        }
        head->next = slow->next;
        head = a;
        return head;
        
    }
};