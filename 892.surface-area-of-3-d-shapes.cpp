/*
 * @lc app=leetcode id=892 lang=cpp
 *
 * [892] Surface Area of 3D Shapes
 */

// @lc code=start
class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int ans = 0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                if (grid[i][j] > 0) ans += 2 + 4 * grid[i][j];
                if (i > 0) ans -= min(grid[i][j], grid[i-1][j])*2;
                if (j > 0) ans -= min(grid[i][j], grid[i][j-1])*2;
            }
        }
        return ans;
    }
};
// @lc code=end

