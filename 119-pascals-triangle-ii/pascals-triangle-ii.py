class Solution:
    def rowgen(self,n):
        a=[]
        a.append(1)
        res=1
        for i in range(1,n):
            res=res*(n-i)
            res//=i
            a.append(res)
        return a

    def getRow(self, rowIndex: int) -> List[int]:
        return self.rowgen(rowIndex+1)