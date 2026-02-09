class Solution:
    def romanToInt(self, s: str) -> int:
        a=0
        while "IV" in s:
            s=s.replace("IV","",1)
            a+=4
        while "IX" in s:
            s=s.replace("IX","",1)
            a+=9
        while "XC" in s:
            s=s.replace("XC","",1)
            a+=90
        while "XL" in s:
            s=s.replace("XL","",1)
            a+=40
        while "CD" in s:
            s=s.replace("CD","",1)
            a+=400
        while "CM" in s:
            s=s.replace("CM","",1)
            a+=900
        for i in s:
            if i=="I":
                a+=1
            elif i=="V":
                a+=5
            elif i=="X":
                a+=10
            elif i=="L":
                a+=50
            elif i=="C":
                a+=100
            elif i=="D":
                a+=500
            elif i=="M":
                a+=1000
        return a
            