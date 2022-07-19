/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode() : val(0), next(nullptr) {}
*     ListNode(int x) : val(x), next(nullptr) {}
*     ListNode(int x, ListNode *next) : val(x), next(next) {}
* };
*/
class Solution {
public:
void reorderList(ListNode* head) {
int c = 1;
stack<int>s;
ListNode* ptr = head, *dummy = new ListNode(0);
ListNode* temp = dummy;
while(ptr != nullptr){
s.push(ptr->val);
c++;
ptr = ptr->next;
}
int i = 1;
ptr = head;
while(i < c)
{
if(i%2)
{
int data = ptr->val;
ListNode* cur = new ListNode(data);
temp->next = cur;
temp = temp->next;
ptr = ptr->next;
}
else{
ListNode* cur = new ListNode(s.top());
temp->next = cur;
temp = temp->next;
s.pop();
}
i++;
}
//return dummy->next;
ptr = dummy->next;
while(ptr!=nullptr)
{
cout<<ptr->val<<" ";
ptr = ptr->next;
}
}
};