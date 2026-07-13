class Solution:
    def arrayRankTransform(self, arr: List[int]) -> List[int]:
        a=[]
        n=sorted(arr)
        m={}
        c=1
        for i in n:
            if i not in m:
                m[i]=c
                c+=1
        for i in arr:
            a.append(m[i])
        return a


