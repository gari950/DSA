/*
// Definition for a Node.
class Node {
public int val;
public Node prev;
public Node next;
public Node child;
};
*/
​
class Solution {
public Node mergelist(Node a, Node b){
Node temp = new Node(0);
Node res = temp;
while(a!=null && b!=null){
if(a.val < b.val){
temp.next = a;
a = a.child;
temp = temp.next;
}
else
{
temp.next=b;
b=b.child;
temp=temp.next;
}
}
if(a!=null)temp.next=a;
else
temp.next=b;
return res.next;
​
}
public Node flatten(Node root) {
if(root==null || root.next==null)
return root;
root.next = flatten(root.next);
root = mergelist(root,root.next);
return root;
}
}