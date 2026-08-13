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
        #define node ListNode
        if (head == NULL || head->next == NULL)
            return head;
        node* first = head;
        node* second = head->next;
        node* b = second;
        while((second!=NULL && second->next!=NULL)){
            
            first->next = first->next->next;
            first = first->next;
            second->next = second->next->next;
            second = second->next;
                 
        }
        first->next = b;
        
        return head;
        
    }
};