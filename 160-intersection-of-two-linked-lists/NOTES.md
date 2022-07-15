ListNode *temp;
while(headA != NULL){
temp = headB;
while(temp != NULL){
if(headA == temp){
return headA;
}
temp = temp -> next;
}
headA = headA -> next;
}
return NULL;
}
};