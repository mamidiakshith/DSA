class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int r=0,l=0;
        int ml=0;
        unordered_set<char>c;
        while(r<s.size()){
            while(c.find(s[r])!=c.end()){
                c.erase(s[l]);
                l++;
            }
            c.insert(s[r]);
            ml=max(ml,r-l+1);
            r++;
        }
        return ml;
    }
};