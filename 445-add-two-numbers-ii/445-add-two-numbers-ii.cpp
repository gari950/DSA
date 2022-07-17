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
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        int carry = 0;
        stack<int> s1;
        stack<int> s2;
      
            while(l1 != NULL)
            {
                s1.push(l1->val);
                l1 = l1->next;
            }
            while(l2 != NULL)
            {
                s2.push(l2->val);
                l2 = l2->next;
            }
        
        while(!s1.empty() || !s2.empty() || carry==1)
        {
            int sum = 0;
            if(!s1.empty())
            {
                sum += s1.top();  
                s1.pop();
            }
             if(!s2.empty())
            {
                sum += s2.top();  
                 s2.pop();
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