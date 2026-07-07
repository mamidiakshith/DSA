class Solution:
    def reverseWords(self, s: str) -> str:
        new=s.split()
        new=new[::-1]
        return ' '.join(new)

        