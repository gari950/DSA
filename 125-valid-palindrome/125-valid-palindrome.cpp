class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()==1)
            return true;
        return check(s,0,s.size()-1);
    }
    
    bool check(string s, int l, int r){
        while(l<r)
        {
            if(!isalnum(s[l])){
                l++;
            }
            else if(!isalnum(s[r])){
                r--;
            }
            else if(tolower(s[l++])!= tolower(s[r--]))
                    {
                return false;
            }
        }
        return true;
    }
};