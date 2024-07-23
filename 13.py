# 13. Roman to Integer
# Easy

class Solution:
    def romanToInt(self, s: str) -> int:
        translation = {
            "I" : 1,
            "V" : 5,
            "X" : 10,
            "L" : 50,
            "C" : 100,
            "D" : 500,
            "M" : 1000,
        }

        number = 0

        number = 0

        for i in range(len(s)-1):
            if translation[s[i]] < translation[s[i+1]]:
                number -= translation[s[i]]
            else:
                number += translation[s[i]]

        return number+translation[s[-1]]
        
        
