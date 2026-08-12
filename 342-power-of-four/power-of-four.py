class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        if n<=0:
            return False
        c=0
        while n>1:
            if n & 1:
                return False
            n>>=1
            c+=1
        return c%2==0
