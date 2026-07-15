class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        word1=list(word1)
        word2=list(word2)      
        a=[]
        i,j=0,0
        v=len(word1)+len(word2)
        for k in range(v):
            if k%2==0:
                if i<len(word1):
                    a.append(word1[i])
                    i+=1
                elif j<len(word2):
                    a.append(word2[j])
                    j+=1
            else:
                if j<len(word2):
                    a.append(word2[j])
                    j+=1
                elif i<len(word1):
                    a.append(word1[i])
                    i+=1
        return "".join(a)