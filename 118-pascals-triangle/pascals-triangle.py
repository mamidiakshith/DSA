class Solution:
    def rowgen(self,n):
        a=[]
        a.append(1)
        x=1
        for i in range(1,n):
            x*=(n-i)
            x//=i
            a.append(x)
        return a

    def generate(self, numRows: int) -> List[List[int]]:
        res=[]
        for i in range(1,numRows+1):
            b=self.rowgen(i)
            res.append(b)
        return res