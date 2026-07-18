class Solution:
    def removeDuplicates(self, s: str) -> str:
        s=list(s)
        a=[]
        for i in s:
            if len(a)==0:
                a.append(i)
            elif len(a)!=0 and i==a[-1]:
                a.pop()
            else:
                a.append(i)
        return ''.join(a)
        