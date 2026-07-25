class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        m={}
        for i in jewels:
            m[i]=m.get(i,0)+1
        for i in stones:
            if i in m:
                m[i]+=1
        c=0
        for i,j in m.items():
            c+=j
        return c-len(jewels)
        