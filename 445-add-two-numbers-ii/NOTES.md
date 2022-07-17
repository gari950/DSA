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
ListNode* reverseList(ListNode* head) {
ListNode* p = head;
ListNode* q = nullptr, *r = nullptr;
while(p)
{
r = q;
q = p;
p = p->next;
q->next = r;
}
return q;
}
ListNode* addTwoNumbers(ListNode* c1, ListNode* c2) {
return add(reverseList(c1), reverseList(c2));
}
ListNode* add(ListNode* l1, ListNode* l2) {
ListNode* dummy = new ListNode(0);
ListNode* temp = dummy;
int carry = 0;
while(l1 != NULL || l2 != NULL || carry != 0)