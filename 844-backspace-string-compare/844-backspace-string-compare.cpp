class Solution {
public:
    bool backspaceCompare(string s, string t) {
       
        stack<char> s1,t1;
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == '#'){
                
            if(s1.empty()==false)
                s1.pop();
            }
            else
                s1.push(s[i]);
        }
        
         for(int i=0;i<t.length();i++)
        {
            if(t[i] == '#'){
                
            if(!t1.empty())
                t1.pop();
            }
            else
                t1.push(t[i]);
        }
            
      return s1==t1?true:false;  
    }
};