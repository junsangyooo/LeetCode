# 57. Insert Interval Python
class Solution(object):
    def insert(self, intervals, newInterval):
        """
        :type intervals: List[List[int]]
        :type newInterval: List[int]
        :rtype: List[List[int]]
        """
        start = newInterval[0]
        end = newInterval[1]
        output = []
        found = False
        for l in intervals:
            if found:
                output.append(l)
                continue
            if l[1] < start:
                output.append(l)
            elif end < l[0]:
                output.append([start, end])
                output.append(l)
                found = True
            else:
                start = min(start, l[0])
                end = max(end, l[1])
        if not found:
            output.append([start, end])
        return output
