class Solution:
    def checkIfPangram(self, sentence: str) -> bool:
        a=set(sentence)
        s=0
        for i in a:
            s+= ord(i)-ord('a') +1
        return s==351

        