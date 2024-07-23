# 155. Min Stack
# Medium

class MinStack:

    def __init__(self):
        self.stack = []
        self. aux_stack = []
        

    def push(self, val: int) -> None:
        self.stack.append(val)
        if self.aux_stack == [] or val <= self.aux_stack[-1]:
            self.aux_stack.append(val)
     

    def pop(self) -> None:
        top_element = self.stack.pop()
        if top_element == self.aux_stack[-1]:
            self.aux_stack.pop()
        

    def top(self) -> int:
        return self.stack[-1]
        

    def getMin(self) -> int:
        return self.aux_stack[-1]


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()
