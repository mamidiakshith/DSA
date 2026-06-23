class Solution {
public:
    bool isValid(string s) {
    stack<char> st;    
    bool flag = true;
    for(char ch:s){
        if(ch=='(' || ch=='{' || ch=='['){
            st.push(ch);
        }
        else if(ch==')'){
            if( !st.empty() && st.top()=='('){
                st.pop();
            }
            else{
                return false;
            }
        }
        else if(ch==']'){
            if(!st.empty() && st.top()=='['){
                st.pop();
            }
            else{
                return false;
            }
        }
        else if(ch=='}'){
            if(!st.empty() && st.top()=='{'){
                st.pop();
            }
            else{
                return false;
            }
        }
    }
    return st.empty();
}
};