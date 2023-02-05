# 621. Task Scheduler Python

class Solution(object):
    def leastInterval(self, tasks, n):
        """
        :type tasks: List[str]
        :type n: int
        :rtype: int
        """
        freq = [0] * 26
        for t in tasks:
            freq[ord(t) - ord('A')] += 1
        freq.sort()

        f_max = freq.pop()
        idle_time = (f_max - 1) * n

        while freq and idle_time > 0:
            idle_time -= min(f_max - 1, freq.pop())
        idle_time = max(0, idle_time)

        return idle_time + len(tasks)
