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
    void reorderList(ListNode* head) {
        int c = 1;
        stack<int>s;
        ListNode* ptr = head,*dummy = new ListNode(0);
        ListNode* temp = dummy;
        while(ptr != nullptr){
            s.push(ptr->val);
            int data = ptr->val;
            ListNode* cur = new ListNode(data);
            temp->next = cur;
            temp = temp->next;
            c++;
            ptr = ptr->next;
        }
        
        int i = 1;
        ptr = head;
        temp = dummy->next;
        while(i < c)
        {
            if(i%2)
            {
            ptr->val = temp->val;
            temp = temp->next;    
            }
            else{
                ptr->val = s.top();
                s.pop();
                
            }
            ptr = ptr->next;
            i++;
        }
        //return dummy->next;
        
    }
};