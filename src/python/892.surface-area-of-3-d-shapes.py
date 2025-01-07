#
# @lc app=leetcode id=892 lang=python3
#
# [892] Surface Area of 3D Shapes
#

# @lc code=start
class Solution:
    def surfaceArea(self, grid: List[List[int]]) -> int:
        ans = 0
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j] > 0:
                    ans += 2 + 4 * grid[i][j]
                if i > 0:
                    ans -= min(grid[i - 1][j], grid[i][j]) * 2
                if j > 0:
                    ans -= min(grid[i][j - 1], grid[i][j]) * 2
        return ans

# @lc code=end

