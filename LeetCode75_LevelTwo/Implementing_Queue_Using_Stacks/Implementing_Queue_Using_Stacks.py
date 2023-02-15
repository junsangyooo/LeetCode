# 232. Implement Queue using Stacks Python
class MyQueue(object):
    def __init__(self):
        self.stack = []
        self.temp = []
    def push(self, x):
        """
        :type x: int
        :rtype: None
        """
        self.stack.append(x)

    def pop(self):
        """
        :rtype: int
        """
        self.peek()
        return self.temp.pop()
        
    def peek(self):
        """
        :rtype: int
        """
        if not self.temp:
            while self.stack:
                self.temp.append(self.stack.pop())
        return self.temp[-1]

    def empty(self):
        """
        :rtype: bool
        """
        return not self.stack and not self.temp
        


# Your MyQueue object will be instantiated and called as such:
# obj = MyQueue()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.peek()
# param_4 = obj.empty()
