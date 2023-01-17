# 299 Bulls and Cows Python

class Solution(object):
    def getHint(self, secret, guess):
        """
        :type secret: str
        :type guess: str
        :rtype: str
        """
        bull=0
        for i in range(len(secret)):
            bull += int(secret[i] == guess[i])

        cows=0
        for c in set(secret):
            cows += min(secret.count(c), guess.count(c))
        cows -= bull
        return str(bull) + "A" + str(cows) + "B"  