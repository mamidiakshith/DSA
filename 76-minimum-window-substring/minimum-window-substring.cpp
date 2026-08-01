class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>m;
        for(int i=0;i<t.size();i++){
            m[t[i]]++;
        }
        int l=0,r=0,c=0;
        int ml=INT_MAX;
        int si=-1;
        while(r<s.size()){
            if(m[s[r]]>0){
                c++;
            }
            m[s[r]]--;
            while(c==t.size()){
                if((r-l+1)<ml){
                    ml= (r-l+1);
                    si=l;
                }
                 m[s[l]]++;
                if(m[s[l]]>0){
                    c--;
                }
                l++;
            }
            r++;
        }
        return si==-1?"":s.substr(si,ml);

    }
};
