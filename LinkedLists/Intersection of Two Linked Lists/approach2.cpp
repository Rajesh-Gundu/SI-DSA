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
            if(headA == NULL || headB == NULL) return NULL;
    
            ListNode * temp = headA;
            int n = 0;
            while(temp != NULL){
                n++;
                temp = temp->next;
            }
            temp = headB;
            int m = 0;
            while(temp != NULL){
                m++;
                temp = temp->next;
            }
    
            ListNode * t1;
            if(n > m){
                temp = headA;
                t1 = headB;
            }
            else{
                temp = headB;
                t1 = headA;
            }
            int cnt = 0;
            while(temp != NULL){
                if(cnt < abs(n-m)){
                    cnt++;
                }
                else{
                    if(temp == t1)
                        return temp;
                    t1 = t1->next;
                }
                temp = temp->next;
            }
            return NULL;
        }
};