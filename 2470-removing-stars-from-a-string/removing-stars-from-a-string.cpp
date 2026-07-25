class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else if(!st.empty() && s[i]=='*'){
                st.pop();
                continue;
            }
            else{
                st.push(s[i]);
            }
        }
        string a="";
        while(!st.empty()){
            char c=st.top();
            a+=c;
            st.pop();
        }
        reverse(a.begin(),a.end());
        return a;
    }
};