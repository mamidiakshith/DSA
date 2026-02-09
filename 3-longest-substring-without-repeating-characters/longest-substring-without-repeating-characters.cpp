class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int st=0,mlen=0;
        unordered_set<char>m;
        for(int i=0;i<s.size();i++){
            while(m.find(s[i])!=m.end()){
                m.erase(s[st]);
                st++;
            }
            m.insert(s[i]);
            mlen=max(mlen,i-st+1);
        }
        return mlen;
    }

};