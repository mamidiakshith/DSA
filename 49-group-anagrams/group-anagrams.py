class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        g={}
        for i in strs:
            key=''.join(sorted(i))
            if key in g:
                g[key].append(i)
            else:
                g[key]=[i]
        return list(g.values())
       
        