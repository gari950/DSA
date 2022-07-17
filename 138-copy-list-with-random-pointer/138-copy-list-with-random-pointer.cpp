/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node *cur = head;
        if (head == nullptr)
            return nullptr;
        
        while(cur != NULL){
            Node *temp = cur->next;
            cur->next = new Node(cur->val);
            cur->next->next = temp;
            cur = temp;
        }
        
        cur = head;
        
        while(cur){
            if(cur != NULL){
                cur->next->random = (cur->random != NULL) ? cur->random->next : NULL;
            }
            cur = cur->next->next;
        }
        
       Node *head_cp = new Node(0);
       Node * temp = head_cp, *ptr;
       cur = head; 
        while(cur)
        {
            ptr = cur->next->next;
            temp->next = cur->next;
            cur->next = ptr;
            temp = temp->next;
            cur = ptr;
        }
        return head_cp->next;
    }
};