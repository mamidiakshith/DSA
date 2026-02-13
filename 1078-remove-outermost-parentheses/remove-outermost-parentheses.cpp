class Solution {
public:
    string removeOuterParentheses(string s) {
        string res;
        int balence=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                if(balence>0){
                    res+=s[i];
                }
                balence++;
            }
            else{
                balence--;
                if(balence>0){
                    res+=s[i];
                }
            }
        }
        return res;
    }
};