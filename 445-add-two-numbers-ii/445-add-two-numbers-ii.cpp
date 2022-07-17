class Solution {
public:
    
    ListNode* reverseList(ListNode* head) {
        
        ListNode* p = head;
        ListNode* q = nullptr, *r = nullptr;
        while(p)
        {
            r = q;
            q = p;
            p = p->next;
            q->next = r;
        }
        return q;
    }
    
    ListNode* addTwoNumbers(ListNode* c1, ListNode* c2) {
        return add(reverseList(c1), reverseList(c2));
    }
    
        ListNode* add(ListNode* l1, ListNode* l2) {
            
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        int carry = 0;
        
        while(l1 != NULL || l2 != NULL || carry != 0)
        {
            int sum = 0;
            if(l1)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            
            if(l2)
            {
                sum += l2->val;
                l2 = l2->next;
            }
            
            sum += carry;
            carry = sum/10;
            ListNode* ptr = new ListNode(sum%10);
            temp->next = ptr;
            temp = temp->next;
        }
        return reverseList(dummy->next);
    }
};
