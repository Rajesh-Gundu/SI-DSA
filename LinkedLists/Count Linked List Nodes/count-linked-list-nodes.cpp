/* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution {
    public:
      int getCount(struct Node* head) {
          int cnt = 0;
          while(head) {
              cnt++;
              head = head->next;
          }
          return cnt;
      }
};