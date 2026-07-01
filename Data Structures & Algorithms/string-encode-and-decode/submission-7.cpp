class Solution {
   public:
    string encode(vector<string>& strs) {
        string s = "";
        for (auto i : strs){
            s += to_string(i.size()) + '#' + i;
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> v;
        string k="";
        int i=0;
        while (i < s.size()){
            int j = i;
            while (s[j] != '#') j++;
            int len = stoi(s.substr(i,j-i));
            v.push_back(s.substr(j+1,len));
            i = len+j+1;
        }
        return v;
    }
};
