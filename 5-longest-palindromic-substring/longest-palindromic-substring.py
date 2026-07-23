class Solution:
    def longestPalindrome(self, s: str) -> str:
        a=[]
        ml=0
        for i in range(len(s)):
            for j in range(i,len(s)):
                k=s[i:j+1]
                if k==k[::-1]:
                    a.append(k)
                    ml=max(ml,len(k))
        for i in a:
            if len(i)==ml:
                return i
        return ""
        