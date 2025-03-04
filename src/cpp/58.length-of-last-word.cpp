/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        int res = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                res++;
            } else if (res > 0) {
                return res;
            }
        }
        return res;
    }
};
// @lc code=end

