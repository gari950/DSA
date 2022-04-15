class Solution {
public:
    string reverseWords(string s) {
        
        stringstream all(s);
        string word , res = "";
        while(all >> word){
            res = word + " " + res;
        }
        return res.substr(0,res.length()-1);
    }
    
};