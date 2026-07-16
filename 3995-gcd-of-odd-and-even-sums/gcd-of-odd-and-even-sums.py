import math
class Solution:
    def gcdOfOddEvenSums(self, n: int) -> int:
        os=es=0
        for i in range(1,2*n):
            if i%2==0:
                es+=i
            else:
                os+=i
        m=max(os,es)
        return math.gcd(os,es)
            
            
        