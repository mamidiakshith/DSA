class Solution:
    def maxDifference(self, s: str) -> int:
        me=float('inf')
        mo=0
        m={}
        for i in s:
            m[i]=m.get(i,0)+1
        for i,j in m.items():
            if j%2==1:
                mo=max(mo,j)
            else:
                me=min(me,j)
        return mo-me