class Solution:
    def reverse(self, x: int) -> int:
        s=0
        r=0
        flag =1
        if x<0:
            flag=-1
        k=abs(x)
        while(k!=0):
            r= k%10
            s=s*10+r
            k=k//10
        s *=flag
        if s< -2**31 or s> 2**31-1:
            return 0
        return s

        