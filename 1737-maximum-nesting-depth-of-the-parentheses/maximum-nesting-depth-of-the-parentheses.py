class Solution:
    def maxDepth(self, s: str) -> int:
        c=mc=0
        st=[]
        for i in s:
            if i=='(':
                st.append(i)
            elif i==')':
                if st and st[-1]=='(':
                    st.pop()
            mc=max(mc,len(st))
        return mc
            
