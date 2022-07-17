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
        
        cur = head;
        Node *copy = nullptr, *head_cp = head->next;
        while (cur != nullptr)
        {
            copy = cur->next;
            cur->next = copy->next;
            cur = cur->next;
            if (cur)
                copy->next = cur->next;
        }
        return head_cp;
    }
};