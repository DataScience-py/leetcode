#
# @lc app=leetcode id=1 lang=python3
#
# [1] Two Sum
#


# @lc code=start
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:  # type: ignore
        h = {}  # Dict
        for i in range(len(nums)):
            if target - nums[i] in h:
                return [h[target - nums[i]], i]
            h[nums[i]] = i


# @lc code=end
