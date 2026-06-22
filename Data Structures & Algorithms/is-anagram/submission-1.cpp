class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        map <char, int> mp;
        map <char, int> mp1; 
        for(int i=0; i<s.length();i++){
            mp[s[i]]++;
        }
        for (int i=0; i<t.length();i++){
            mp1[t[i]]++;
        }
        
        for(int i=0; i<s.length();i++){
            if(mp[s[i]] != mp1[s[i]]) return false;
        }
        return true;
    }
};
