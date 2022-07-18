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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
     ListNode* p = head, *temp, *tail=nullptr;
     ListNode* dummy = new ListNode();
           p = dummy;
      p->next = head;  
     
        if( left == right || head==nullptr)
            return head;
        
       for(int i=0;i<left-1;i++)
        {     
              p = p->next;
            }
        
            tail = p->next;
        
          for(int i=0; i<right-left; i++){
              temp = p->next;
              p->next = tail->next;
              tail->next = tail->next->next;
              p->next->next = temp;
          }
              
     return dummy->next;   
    }
    
};