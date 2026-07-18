class Solution:
    def maximumValue(self, strs: List[str]) -> int:
        ml=0
        for i in strs:
            if i.isdigit():
                ml=max(ml,int(i))
            else:
                ml=max(ml,len(i))
        return ml
