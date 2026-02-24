class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int r=0,f=0,ml=0;
        unordered_set<int>k;
        while(r< s.size()){
            while(k.find(s[r])!=k.end()){
                k.erase(s[f]);
                f++;
            }
            k.insert(s[r]);
            ml=max(ml,r-f+1);
            r++;
        }
        return ml;
    }

};