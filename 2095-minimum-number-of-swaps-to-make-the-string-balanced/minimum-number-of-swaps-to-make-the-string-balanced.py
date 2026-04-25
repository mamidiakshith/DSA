class Solution:
    def minSwaps(self, s: str) -> int:
        st=[]
        c=0
        for i in s:
            if i=='[':
                st.append(i)
            else :
                if st and st[-1] == '[':
                    st.pop()
                else:
                    st.append(i)
        for i in st:
            if i=='[':
                c+=1
        return (c+1)//2