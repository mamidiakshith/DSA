from collections import Counter
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        m={}
        for i in nums:
            m[i]=m.get(i,0)+1
        s=sorted(m.items(),key=lambda x:x[1],reverse=True)
        a=[]
        for i in range(k):
            a.append(s[i][0])
        return a




        