class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> temp(26,0);
        for(char c:words[0])
        {
            temp[c- 'a']++;
        }
       for(int i=1; i < words.size(); i++)
       {
        vector<int> temp1(26,0);
        for(char c : words[i])
        {
            temp1[c-'a']++;
        }
       
       for(int j=0;j<26;j++)
       {
        temp[j] = min(temp[j],temp1[j]);
       }
    }
   vector<string> ans;
   for (int i = 0; i < 26; i++)
   {
    while(temp[i]>0)
    {
        ans.push_back(string(1,'a'+i));
        temp[i]--;
    }
   }
   return ans;
}
};