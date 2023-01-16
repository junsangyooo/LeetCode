# 1046. Last Stone Weight Python

class Solution(object):
    def lastStoneWeight(self, stones):
        """
        :type stones: List[int]
        :rtype: int
        """
        stones.sort()
        index = len(stones) -1
        while index > 0:
            if stones[index] == stones[index - 1]:
                stones.pop(index)
                stones.pop(index - 1)
                index -= 2
            elif stones[index] > stones[index - 1]:
                stones.append(stones.pop(index) - stones.pop(index - 1))
                stones.sort()
                index -= 1
            else:
                stones.append(stones.pop(index - 1) - stones.pop(index - 1))
                stones.sort()
                index -= 1
        return stones[index] if len(stones) > 0 else 0
