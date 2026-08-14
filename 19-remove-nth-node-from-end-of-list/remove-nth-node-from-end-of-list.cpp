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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        #define node ListNode
        node* a = head;
        int size = 0;
        while (head!=NULL){
            head = head->next;
            size++;
        }
        head = a;
        for(int i =1; i<size-n; i++){
            head = head->next;

        }
        if(size == n) return (head->next);
        if(head->next == NULL) return NULL;
        
        head->next = head->next->next;
        head = a;
        return head;
    }
};