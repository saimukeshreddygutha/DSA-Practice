class Solution:
    def maxKelements(self, nums: List[int], k: int) -> int:
        nums = [-1 * i for i in nums]
        heapify(nums)
        ans = 0
        while k != 0:
            maxNum = -1 * heappop(nums)
            ans += maxNum
            heappush(nums, -1 * math.ceil(maxNum/3))
            k -= 1
        return ans
