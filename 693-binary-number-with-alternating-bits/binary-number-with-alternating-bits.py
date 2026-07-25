class Solution:
    def hasAlternatingBits(self, n: int) -> bool:
        a=bin(n)[2:]
        a=str(a)
        for i in range(1,len(a)):
            if a[i]==a[i-1]:
                return False
        return True
        