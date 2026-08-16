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
        #define node ListNode 
        #define ll unsigned long long
        
        ll sum = 0;
        node* ans = new node(0 , NULL);
        node* a = ans;
        while(l1 != NULL || l2 != NULL || sum != 0){
            int s1 = (l1==NULL)? 0 : l1->val;
            int s2 = (l2==NULL)? 0 : l2->val;
            sum += s1+s2;
       
            node* temp = new node(sum%10 , NULL);
            ans ->next = temp;
            ans = ans->next;
            l1 = (l1 == NULL)? NULL : l1->next;
            l2 = (l2 == NULL)? NULL : l2->next;
            sum = sum/10;
            

        }
        return a->next;
    }
};