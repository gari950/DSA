```
if(lists.empty()){
return nullptr;
}
while(lists.size() > 1){
lists.push_back(mergeTwoLists(lists[0], lists[1]));
lists.erase(lists.begin());
lists.erase(lists.begin());
}
return lists.front();
```
​
#########
```
if(l1 == nullptr){
return l2;
}
if(l2 == nullptr){
return l1;
}
if(l1->val <= l2->val){
l1->next = mergeTwoLists(l1->next, l2);
return l1;
}
else{
l2->next = mergeTwoLists(l1, l2->next);
return l2;
}
```
##############
```
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
```