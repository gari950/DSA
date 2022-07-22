class Solution {
public:
    Node* flatten(Node* head) {
        Node* temp=head;
        Node* x,end;
        Node* temp2;
        if(temp==NULL){
            return NULL;
        }
        if(temp->child==NULL){
            flatten(temp->next);
        }
        if(temp->child!=NULL){
            x=temp->child;
            temp2=x;
            flatten(temp->child);
            while(temp2->next!=NULL){  
                temp2->child=NULL;
                temp2=temp2->next;
            }
            temp2->next=temp->next;
            temp->child=NULL;
            if(temp->next)
                temp->next->prev=temp2;
            temp->next=x;
            x->prev=temp;
        }
        
        return head;
    }
};