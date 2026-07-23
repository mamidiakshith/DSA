class Solution:
    def countPrimes(self, n: int) -> int:
        a=[1]*(n)
        if n==0 or n==1:
            return 0
        a[0]=a[1]=0
        for i in range(2,int(n**0.5)+1):
            if a[i]==1:
                for j in range(i*i,n,i):
                    a[j]=0
        c=0
        return a.count(1)