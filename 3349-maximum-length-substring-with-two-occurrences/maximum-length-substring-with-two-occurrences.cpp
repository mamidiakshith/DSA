class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int>m;
        int l=0,r=0,ml=0;
        while(r<s.size()){
            m[s[r]]++;
            while(m[s[r]]>2){
                m[s[l]]--;
                l++;
            }
    ml=max(ml,r-l+1);
    r++;

        }
        return ml;

    }
};