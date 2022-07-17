while(head){
// Copy the alternate added nodes from the old linklist
helper->next=head->next;
helper=helper->next;
// Restoring the old linklist, by removing the alternative newly added nodes
head->next=head->next->next;
head=head->next; // go to next alternate node
}
return ans->next;