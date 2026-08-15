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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        #define node ListNode

        node* a = headA;
        node* b = headB;
        unordered_map<node* , int> mpp;
        while(a!=NULL){
            mpp[a]++;
            a=a->next;
            
        }
        while(!mpp.contains(b) && b!=NULL){
            b=b->next;
        }
        return b;

    }
};