class Solution {
public:
    bool isValid(string s) {
        stack<char> str;
        for(char c : s)
        {
           
            if(c=='(' || c=='{' || c=='[' )
                str.push(c);
                
            else{
            if(str.empty()) return false;
            if(c == ')' && str.top() != '(') return false;
            if(c == '}' && str.top() != '{') return false;
            if(c == ']' && str.top() != '[') return false;
            str.pop();
        }
        }
        
            return str.empty() ;
    }
};