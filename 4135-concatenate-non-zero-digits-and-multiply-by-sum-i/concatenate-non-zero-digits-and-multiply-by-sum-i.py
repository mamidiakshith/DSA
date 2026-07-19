class Solution:
    def sumAndMultiply(self, n: int) -> int:
        a=""
        s=0
        while n:
            r=n%10
            s+=r
            if r!=0:
                a=str(r)+a
            n//=10
        if a=="":
            return 0
        return int(a)*s
