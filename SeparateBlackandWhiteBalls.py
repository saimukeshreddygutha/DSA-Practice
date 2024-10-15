class Solution:
    def minimumSteps(self, s: str) -> int:
        l, res, countPrevWhite = len(s) - 1, 0, 0
        while l >= 0:
            if s[l] == '0':
                countPrevWhite += 1
            else:
                res += countPrevWhite
            l -= 1
        return res
