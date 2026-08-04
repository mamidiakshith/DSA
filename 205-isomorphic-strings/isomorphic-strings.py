class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        ctow={}
        wtoc={}
        for i,j in zip(s,t):
            if i in ctow and ctow[i]!=j:
                return False
            if j in wtoc and wtoc[j]!=i:
                return False
            ctow[i]=j
            wtoc[j]=i
        return True