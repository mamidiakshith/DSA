class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>m;
        for(int i=0;i<t.size();i++){
            m[t[i]]++;
        }
        int ml=INT_MAX,si=-1;
        int c=0;
        int r=0,l=0;
        while(r<s.size()){
            if(m[s[r]]>0){
                c++;
            }
            m[s[r]]--;
            while(c==t.size()){
                if((r-l+1)<ml){
                    ml= r-l+1;
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

