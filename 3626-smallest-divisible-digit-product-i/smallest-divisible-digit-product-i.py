class Solution:
    def smallestNumber(self, n: int, t: int) -> int:
        a=str(n)
        if '0' in a:
            return n
        while True:
            b=n
            p=1
            while b!=0:
                p*= b%10
                b//=10
            if p%t==0:
                return n
            n+=1
        return 0
            
            

