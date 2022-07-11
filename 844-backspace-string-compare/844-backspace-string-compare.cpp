class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int j=0,k=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='#')
            {
                j--;
                if(j<0)
                    j=0;
            }
            else{
                s[j]=s[i];
                j++;
            }
        }
         for(int i=0;i<t.length();i++)
        {
            if(t[i]=='#')
            {
                k--;
                if(k<0)
                    k=0;
            }
            else{
                t[k]=t[i];
                k++;
            }
        }
        if(j!=k)
            return false;
        else
        {
            for(int i=0;i<k;i++)
            {
                if(s[i]!=t[i])
                    return false; 
            }
            return true;
        }
    }
};