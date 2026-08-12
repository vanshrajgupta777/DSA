/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:

    ListNode* repeat(ListNode* s , ListNode* head){
        ListNode* p = head;
        while(s!=p){
            p=p->next;
            s=s->next;
        }
        return s;
    }
    ListNode *detectCycle(ListNode *head) {
        #define node ListNode
        node* s = head;
        node* f = head;

        while(f!=NULL && f->next!=NULL){
            s = s->next;
            f = f->next->next;
            
            if(s == f) {
                return (repeat(s,head));
            }

        }
        return NULL;
    }
};