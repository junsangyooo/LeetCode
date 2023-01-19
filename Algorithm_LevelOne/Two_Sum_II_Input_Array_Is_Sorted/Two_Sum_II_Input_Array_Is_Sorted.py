# 167. Two Sum II - Input Array Is Sorted Python

class Solution(object):
    def twoSum(self, numbers, target):
        """
        :type numbers: List[int]
        :type target: int
        :rtype: List[int]
        """
        minimum = 0
        maximum = len(numbers)-1
        while True:
            if numbers[maximum] + numbers[minimum] > target:
                maximum -= 1
                continue
            elif numbers[maximum] + numbers[minimum] < target:
                minimum += 1
            else:
                return [minimum + 1, maximum + 1]
            