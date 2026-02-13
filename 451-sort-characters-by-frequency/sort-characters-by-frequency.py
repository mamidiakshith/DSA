from collections import Counter
class Solution:
    def frequencySort(self, s: str) -> str:
        count=Counter(s)
        res=""
        sor=sorted(count.items(),key=lambda x:x[1],reverse=True)
        for char,key in sor:
            res+= char*key
        return res


        