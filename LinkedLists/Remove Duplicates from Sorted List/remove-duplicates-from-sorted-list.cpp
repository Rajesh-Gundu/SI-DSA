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
        ListNode* deleteDuplicates(ListNode* head) {
            if(head == NULL || head->next == NULL) return head;
            ListNode* prev = head;
            ListNode* cur = head->next;
            while(cur != NULL){
                while(cur != NULL && prev->val == cur->val)
                    cur = cur->next;
                prev->next = cur;
                prev = cur;
                if(cur != NULL)
                    cur = cur->next;
            }
            return head;
        }
};