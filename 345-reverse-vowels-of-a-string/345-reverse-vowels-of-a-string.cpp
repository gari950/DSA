class Solution {
public:
    string reverseVowels(string s) {
       
        int i = 0, j = s.size() - 1;
        while (i<j)
        {
            bool f1=false,f2=false;
            if(s[i]=='a' || s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'|| s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
              f1=true;
             if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u' || s[j]=='A' || s[j]=='E'|| s[j]=='I'|| s[j]=='O'|| s[j]=='U')
                 f2=true;
            if(f1 && f2)
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
            if(!f1)
                i++;
            if(!f2)
                j--;
            
            }
        return s;
        
                
    }
};