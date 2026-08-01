class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        strs.sort()
        k=""
        for i in range(len(strs[0])):
            if strs[0][i]==strs[-1][i]:
                k+=strs[0][i]
            else:
                break
        return k
            