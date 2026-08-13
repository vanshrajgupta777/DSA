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
    bool isPalindrome(ListNode* head) {
        #define node ListNode
        node* tail = head;
        vector<long long> val;
        while(tail!=NULL){
            val.push_back(tail->val);
            tail=tail->next;
        }
        int left = 0;
        int right = val.size()-1;
        while(left<right){
            if(val[left]!=val[right]) return false;
            left++;
            right--;
            
        
        }
        return true;
    }
};