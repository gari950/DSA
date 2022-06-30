class Solution {
public:
    int majorityElement(vector<int>& arr) {
    int key;
    int n = arr.size();
    unordered_map<int,int> m;
    int ans = 0;
    for(auto a : arr)
         m[a]++;
    for(auto a : m)
    {
        key =  a.first;;
        if(a.second > floor(n/2))  
            return key;
    }
    return -1;
           
    }
};