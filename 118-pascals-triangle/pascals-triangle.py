class Solution:
    def rowgen(self,i):
        a=[]
        for j in range(i):
            a.append(comb(i-1,j))
        return a
    def generate(self, numRows: int) -> List[List[int]]:
        res=[]
        for i in range(1,numRows+1):
            res.append(self.rowgen(i))
        return res
