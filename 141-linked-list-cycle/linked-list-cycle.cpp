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
        ListNode* h = head;
        while(!mpp.contains(h)){
            if(h == NULL) return false;

            mpp[h]++;
            h = h->next;

        }
        return true;

    }
};