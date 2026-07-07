class Solution:
    def frequencySort(self, s: str) -> str:
        res=""
        m={}
        for i in s:
            m[i]=m.get(i,0)+1
        for i,j in sorted(m.items(), key=lambda x: x[1], reverse=True):
            res+= i*j
        return res