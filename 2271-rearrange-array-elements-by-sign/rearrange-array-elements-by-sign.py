class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        pos=[]
        neg=[]
        for i in nums:
            if i>=0:
                pos.append(i)
            else:
                neg.append(i)
        a=[0]*len(nums)
        k=l=0
        for i in range(len(nums)):
            if i%2==0:
                a[i]=pos[k]
                k+=1
            else:
                a[i]=neg[l]
                l+=1
        return a