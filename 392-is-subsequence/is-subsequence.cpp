class Solution {
public:
    bool isSubsequence(string s, string t) {
         if (s.empty()) return true;

        stack<char> st;
    int a=0;
        for (char c : s)
            st.push(c);

        reverse(t.begin(), t.end());

        for (char c : t) {
            if (!st.empty() && c == st.top()) {
                st.pop();
            }
        }
        return st.empty();

    }
};