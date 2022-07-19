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
    ListNode* reverse(ListNode* head){
        ListNode* p = head,*r=NULL,*q=NULL;
        while(p)
        {
            r = q;
            q = p;
            p = p->next;
            q->next = r;
        }
        return q;
    }
    
    void reorderList(ListNode* head) {
        ListNode* slow = head, *fast = head,*first = head;
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        //ListNode *first=head;
        ListNode* sec = reverse(slow->next);
        slow->next = NULL;
        
        while(sec){
            ListNode* t1 = first->next;
            ListNode* t2 = sec->next;
            first->next = sec;
            sec->next = t1;
            first = t1;
            sec = t2;
        }
    }
};