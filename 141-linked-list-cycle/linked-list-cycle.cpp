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
    bool hasCycle(ListNode *head) {
        #define node ListNode
        unordered_map <ListNode* , int> mpp;
        node* s = head;
        node* f = head;
        while(f!=NULL && f->next != NULL){
            s = s->next;
            f = f->next->next;
            if(s == f) return true;

        }
        return false;

    }
};