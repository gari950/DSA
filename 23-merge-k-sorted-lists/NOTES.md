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