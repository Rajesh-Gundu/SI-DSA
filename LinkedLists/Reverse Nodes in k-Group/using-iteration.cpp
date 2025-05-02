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
    ListNode* getKthNode(ListNode* head,int k) {
        while(k>1 && head) {
            head = head->next;
            k--;
        }
        return head;
    }

    ListNode* reverseLL(ListNode* head) {
        if(head == NULL || head->next == NULL) {
            return head;
        }
        ListNode* cur = NULL;
        ListNode* rev = NULL;
        while(head != NULL) {
            cur = head;
            head = head->next;
            cur->next = rev;
            rev = cur;
        }
        return rev;
    }

public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL) return NULL;
        ListNode* tmp = head;
        ListNode* prev = NULL;
        while(tmp) {
            ListNode* kth = getKthNode(tmp,k);
            if(kth == NULL) {
                if(prev)
                    prev->next = tmp;
                break;
            }
            ListNode* nn =  kth->next;
            kth->next = NULL;
            reverseLL(tmp);
            if(prev == NULL)
                head = kth;
            else
                prev->next = kth;
            prev = tmp;
            tmp = nn;
        }
        return head;
    }
};