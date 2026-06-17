class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0,ml=0,mf=0;
        vector<int>v(26,0);
        while(r<s.size()){
            v[s[r]-'A']++;
            mf=max(mf,v[s[r]-'A']);
            while( (r-l+1)-mf >k){
                v[s[l]-'A']--;
                l++;
            }
            ml=max(ml,r-l+1);
            r++;
        }
        return ml;
    }
};