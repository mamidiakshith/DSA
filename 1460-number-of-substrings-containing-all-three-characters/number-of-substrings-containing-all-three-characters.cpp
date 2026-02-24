class Solution {
public:
    int numberOfSubstrings(string s) {
        int r=0,l=0,ac=0,bc=0,cc=0,mc=0;
        while(r<s.size()){
            if(s[r]=='a')ac++;
            if(s[r]=='b')bc++;
            if(s[r]=='c')cc++;
            while(ac>0 && bc>0 && cc>0){
                mc+= (s.size()-r);
                if(s[l]=='a')ac--;
                if(s[l]=='b')bc--;
                if(s[l]=='c')cc--;
                l++;
            }
            r++;
        }
        return mc;
    }
};