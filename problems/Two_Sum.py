class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        for num in nums:
            need = target - num
            if need == num and nums.count(num) >= 2:
                    lst = []
                    index_num = nums.index(num)
                    index_need = nums.index(need, index_num + 1)
                    lst.append(index_num)
                    lst.append(index_need)
                    return lst
            elif need != num and need in nums:
                lst = []
                index_num = nums.index(num)
                index_need = nums.index(need)
                lst.append(index_num)
                lst.append(index_need)
                return lst
