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
            int n = 0;
            ListNode* t = head;
            while(t) {
                n++;
                t = t->next;
            }
            t = head;
            for(int i=0;i<(n/2);i++) {
                t = t->next;
            }
            return t;
        }
};