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
        
    if(l == nullptr){
        return r;
    }
    if(r == nullptr){
        return l;
    }
    if(l->val <= r->val){
        l->next = merge(l->next, r);
        return l;
    }
    else{
        r->next = merge(l, r->next);
        return r;
    }
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