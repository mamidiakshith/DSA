
class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        s=s.split()
        if len(s)!=len(pattern):
            return False
        cw={}
        wc={}
        for c,w in zip(pattern,s):
            if c in cw and cw[c]!=w:
                return False
            if w in wc and wc[w]!=c:
                return False
            cw[c]=w
            wc[w]=c
        return True

