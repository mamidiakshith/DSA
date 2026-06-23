class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(string ch:tokens){
            if(isdigit(ch.back())){
                st.push(stoi(ch));
            }
            else{
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                if (ch == "+")
                    st.push(b + a);
                else if (ch == "-")
                    st.push(b - a);
                else if (ch == "*")
                    st.push(b * a);
                else
                    st.push(b / a);
            }
        }
        return st.top();
    }
};