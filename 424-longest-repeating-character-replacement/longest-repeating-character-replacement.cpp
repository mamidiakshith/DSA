class Solution {
public:
    int characterReplacement(string s, int k) {
        int f=0,r=0,mf=0,ml=0;
        vector<int>v(26,0);
        while(r<s.size()){
            v[s[r]-'A']++;
            mf=max(mf,v[s[r]-'A']);
            while( r-f+1-mf >k){
                v[s[f]-'A']--;
                f++;
            }
            ml=max(ml,r-f+1);
            r++;
        }
        return ml;
    }
};