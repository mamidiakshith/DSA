class Solution:
    def countNegatives(self, grid: List[List[int]]) -> int:
        a=0
        m=len(grid)
        n=len(grid[0])
        for i in range(m):
            for j in range(n):
                if grid[i][j] <0:
                    a+=1
        return a

        