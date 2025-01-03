/*
 * @lc app=leetcode id=119 lang=cpp
 *
 * [119] Pascal's Triangle II
 */

// @lc code=start
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res(rowIndex + 1, 1);
        for (int i = 1; i <= rowIndex; i++) {
            for (int j = i - 1; j > 0; j--) {
                res[j] += res[j - 1];
            }
        }
        return res;
    }
};
// @lc code=end

