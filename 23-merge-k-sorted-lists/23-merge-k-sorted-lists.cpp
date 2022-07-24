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
    ListNode* merge(ListNode* l, ListNode*r){
        ListNode *dummy = new ListNode(0);
        ListNode *ptr =dummy;
        while(l && r){
            if(l->val <= r->val){
                ptr->next=l;
                ptr=ptr->next;
                l=l->next;
            }
            else{
                 ptr->next=r;
                ptr=ptr->next;
                r=r->next;
            }
            
        }
        if(l){
                ptr->next=l;
                l=l->next;
            }
            if(r){
                ptr->next=r;
                r=r->next;
            }
        return dummy->next;
    }
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
       if(lists.empty()){
        return NULL;
    }
        int n = lists.size();
    while(n > 1){
        for(int i=0;i<n/2;i++)
            lists[i] = merge(lists[i],lists[n-1-i]);
        n = (n+1)/2;
    }
    return lists.front();      
        
    }
};