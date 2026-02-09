class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int f=0,ml=0;
        unordered_set<char>m;
        for(int i=0;i<s.size();i++){
            while(m.find(s[i])!=m.end()){
                m.erase(s[f]);
                f++;
            }
            m.insert(s[i]);
            ml=max(ml,i-f+1);
        }
        return ml;
    }

};