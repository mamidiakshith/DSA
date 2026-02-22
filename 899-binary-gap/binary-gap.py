class Solution:
    def binaryGap(self, n: int) -> int:
        s=bin(n)[2:]
        mc=c=0
        oc=0
        st=False
        for i in s:
            if i=="1":
                if st:
                    mc=max(mc,c+1)
                c=0
                st=True
            else:
                if st:
                    c+=1
        return mc



