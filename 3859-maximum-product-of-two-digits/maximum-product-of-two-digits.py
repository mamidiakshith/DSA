class Solution:
    def maxProduct(self, n: int) -> int:
        n=str(n)
        n=sorted(n)
        a=n[-1]
        b=n[-2]
        if a=='0' or b=='0':
            return 0
        return int(a)*int(b)

