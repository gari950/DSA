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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *cur=dummy,*pre=dummy,*nex=dummy;
        int count = 0;
        
        while(cur->next){         //last element
            cur = cur->next;
            count++;
        }
        
        while(count >= k){
            cur= pre->next;        
            nex= cur->next;          //nex hmesha cur ke aage
            for(int i=1;i<k;i++){         // k-1 iterations
                cur->next = nex->next;
                nex->next = pre->next;
                pre->next = nex;
                nex = cur->next;          //cur ka next element
            }
            count-=k;
            pre=cur;           //cur hmesha pre ke aage
        }
        return dummy->next;
    }
};