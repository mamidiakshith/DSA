class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        prod=1
        s=0
        while n!=0:
            r=n%10
            prod*=r
            s+=r
            n//=10
        return prod-s