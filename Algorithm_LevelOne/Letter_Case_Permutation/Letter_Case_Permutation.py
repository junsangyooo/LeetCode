# 784. Letter Case Permutation Python

class Solution(object):
    def letterCasePermutation(self, s):
        """
        :type s: str
        :rtype: List[str]
        """
        output = [[]]

        for char in s:
            n = len(output)
            if char.isalpha():
                for i in range(n):
                    output.append(output[i][:])
                    output[i].append(char.lower())
                    output[n+i].append(char.upper())
            else:
                for i in range(n):
                    output[i].append(char)
        return map("".join, output)
