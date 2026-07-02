class Solution {
public:
    string minWindow(string s, string t) {
        int r=0,l=0,c=0,si=-1;
        int minlen=INT_MAX;
        unordered_map<char,int>m;
        for(int i=0;i<t.size();i++){
            m[t[i]]++;
        }
        while(r<s.size()){
            if(m[s[r]]>0){
                c++;}
                m[s[r]]--;
            while(c==t.size()){
                if( r-l+1 <minlen){
                    minlen=r-l+1;
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
        if(si==-1){
            return "";
        }
        return s.substr(si,minlen);
    }
};