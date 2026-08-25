class Solution:
    def checkDivisibility(self, n: int) -> bool:
        s=0
        p=1
        k=n
        while k!=0:
            r=k%10
            s+=r
            p*=r
            k//=10
        return n%(s+p)==0
        