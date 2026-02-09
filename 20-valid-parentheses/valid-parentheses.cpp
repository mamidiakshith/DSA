class Solution {
public:
    bool isValid(string s) {
    stack<char> st;    
    bool flag = true;

    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        }
        else {
            if (st.empty()) {
                flag = false;
                break;
            }

            if (c == ')') {
                if (st.top() != '(') {
                    flag = false;
                    break;
                }
                else {
                    st.pop();
                }
            }
            else if (c == '}') {
                if (st.top() != '{') {
                    flag = false;
                    break;
                }
                else {
                    st.pop();
                }
            }
            else if (c == ']') {
                if (st.top() != '[') {
                    flag = false;
                    break;
                }
                else {
                    st.pop();
                }
            }
        }
    }

    if (!st.empty()) {
        flag = false;
    }

    return flag;
}
};