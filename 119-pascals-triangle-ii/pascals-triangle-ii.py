class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        n=rowIndex
        a=[]
        for i in range(n+1):
            a.append(comb(n,i))
        return a

        