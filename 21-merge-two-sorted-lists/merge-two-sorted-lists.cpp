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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        #define node ListNode
        vector<int> m;
        node* h = list1;
        while(h!=NULL){
            
            m.push_back(h->val);
            h=h->next;

        }
        h = list2;
        while(h!=NULL){
        
            m.push_back(h->val);
            h=h->next;

        }

        sort(m.begin(),m.end());

        node* merge = new ListNode();
        if(m.empty()) return nullptr;
        merge->val = m[0];
        node* head = merge;
        for(int i=1;i<m.size();i++){
            node* temp = new node(m[i]);
            head->next = temp;
            head = head->next;

        }
        return merge;


    }
};