from math import comb
class Solution:
    def rowgen(self,n):
        a=[]
        for i in range(n+1):
            a.append(comb(n,i))
        return a

    def generate(self, numRows: int) -> List[List[int]]:
        res=[]
        for i in range(numRows):
            b=self.rowgen(i)
            res.append(b)
        return res