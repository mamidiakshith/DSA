class Solution:
    def reverse(self, x: int) -> int:
        s=0
        r=0
        flag =1
        if x<0:
            flag=-1
        k=str(abs(x))[::-1]
        ans= int(k)*flag
        if ans< -2**31 or ans> 2**31-1:
            return 0
        return ans
        

        