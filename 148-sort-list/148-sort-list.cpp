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
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next == NULL)
            return head;
        
        ListNode *temp = NULL;
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast!=NULL && fast->next!=NULL)
        {
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        temp->next = NULL;
        
        ListNode *left = sortList(head);
        ListNode *right = sortList(slow);
        return Merge(left,right);  
           
    }
    
    
    ListNode* Merge(ListNode *l , ListNode *r)
    {
        ListNode* ptr = new ListNode(0);
        ListNode* cur = ptr;
        
        while(l!=NULL && r!=NULL)
        {
            if(l->val <= r->val)
            {
                cur->next = l;
                l = l->next;
            }
            else{
                cur->next = r;
                r = r->next;
            }
            cur = cur->next;
        }
        if(l!=NULL)
        {
            cur->next = l;
            l = l->next;
        }
        if(r!=NULL)
        {
            cur->next = r;
            r = r->next;
        }
        return ptr->next;
    }
};