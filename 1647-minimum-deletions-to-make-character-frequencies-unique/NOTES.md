​
int freq[26] = {}, res = 0;
unordered_set<int> seenfreq;
for (char ch : s)
{
++freq[ch - 'a'];
cout<<ch - 'a'<<endl;
}
for (int i = 0; i < 26; ++i)
{
while(freq[i] > 0 && seenfreq.find(freq[i]) != seenfreq.end())
{
freq[i]--;
res++;
}
seenfreq.insert(freq[i]);
}
return res;
}