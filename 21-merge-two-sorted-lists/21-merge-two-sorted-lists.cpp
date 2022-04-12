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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *list3=NULL,*r=NULL;
         if (list1 == NULL) {
            return list2 ; 
        }
        else if(list2 == NULL){
            return list1 ; 
        }
        
       
        else if(list1->val <= list2->val)
        {
            list3 = list1 ; 
            list1 = list1->next ; 
            list3->next = NULL ; 
            r = list3 ; 
           
        }
        else{
              list3 = list2 ; 
            list2 = list2->next ; 
            list3->next = NULL ; 
            r = list3 ;  
        }
        while(list1!=NULL && list2!=NULL){
            if(list1->val<=list2->val){
            r->next = list1 ;
                r = list1 ;
                list1 = list1->next ;
                r->next = NULL ;
            }
            else{
                r->next = list2 ;
                r = list2 ;
                list2 = list2->next ;
                r->next = NULL ;
            }
        }
         if (list1) {
            r->next = list1 ;
        }
        if (list2){
            r->next = list2 ;
        }
        
        return list3;
    }
};