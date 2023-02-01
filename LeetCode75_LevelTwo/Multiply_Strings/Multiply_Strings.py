# 43. Multiply Strings Python

class Solution(object):
    def multiply(self, num1, num2):
        """
        :type num1: str
        :type num2: str
        :rtype: str
        """
        if num1 == "0" or num2 == "0":
            return "0"
        num = 0
        n1 = 0
        for i in range(len(num1)):
            n1 += int(num1[i]) * pow(10, len(num1)-1-i)
        for j in range(len(num2)):
            n2 = int(num2[j]) * pow(10, len(num2)-1-j)
            num += n1 * n2
        return str(num)
