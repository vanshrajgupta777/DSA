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
    ListNode* middleNode(ListNode* head) {
        #define node ListNode
        node* h = head;
        int size=0;
        while(h!=NULL){
            h = h->next;
            size++;
        }
        h = head;
        for(int i =0 ;i<int(size/2);i++){
            h=h->next;
        }
        return h;
    }
};