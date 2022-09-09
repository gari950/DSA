class Solution {
public:
    int majorityElement(vector<int>& nums) {
     int c=0,can=0;
        for(int num : nums){
            if(c==0)
                can = num;
            if(num==can)c+=1;
            else
                c-=1;
        }
        return can;
    }
};