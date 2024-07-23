# 682. Baseball Game
# Easy

class Solution:
    def calPoints(self, operations: List[str]) -> int:
        record = []

        for i,val in enumerate(operations):
            if val.lstrip("-").isdigit():
                record.append(int(val))

            elif val == "C":
                record.pop()

            elif val == "D":
                record.append(record[-1]*2)

            elif val == "+":
                record.append(record[-1]+record[-2])
                
       
        return sum(record)
