class Solution {
public:
    bool isIsomorphic(string s, string t) {
        // map
        unordered_map<char,char>mp1;
         unordered_map<char,char>mp2;

          if(s.size() != t.size())
            return false;

            for(int i = 0; i < s.size(); i++){
      
// mapping ka logic

if(mp1.find(s[i])!=mp1.end()){
    if(mp1[s[i]]!=t[i])
return false;
    }
if(mp2.find(t[i])!=mp2.end()){
    if(mp2[t[i]]!=s[i])
        return false;

    }
      mp1[s[i]] = t[i];
      mp2[t[i]] = s[i];
}
return true;
}
};