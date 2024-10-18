class Solution:
    def countMaxOrSubsets(self, nums: List[int]) -> int:
        def getMaxOR(nums):
            maxOR = 0
            for i in nums:
                maxOR |= i
            return maxOR

        def countMaxOR(curMax, curInd):
            nonlocal count
            if curInd == n:
                if curMax == maxOR:
                    count += 1
                return
            countMaxOR(curMax, curInd + 1)
            countMaxOR(curMax | nums[curInd], curInd + 1)

        n = len(nums)    
        maxOR = getMaxOR(nums)
        curInd, count = 0, 0
        countMaxOR(0, 0)
        return count
