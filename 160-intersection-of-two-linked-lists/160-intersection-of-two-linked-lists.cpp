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
        ListNode*temp;
        unordered_map<ListNode*,int> count;
      while(headA != NULL)  
      {
          count[headA]++;
          headA = headA->next;
      }
       while(headB != NULL)  
       {
           if(count[headB]>0)
               return headB;
           
           headB = headB->next;
       }
        return NULL;
    }
};