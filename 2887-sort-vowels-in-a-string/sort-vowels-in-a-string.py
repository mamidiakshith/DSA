class Solution:
    def sortVowels(self, s: str) -> str:
        a=[]
        for i in s:
            if i in 'aeiouAEIOU':
                a.append(i)
        a=sorted(a)
        j=0
        s=list(s)
        for i in range(len(s)):
            if s[i] in 'aeiouAEIOU':
                s[i]=a[j]
                j+=1
        return "".join(s)
        
        
