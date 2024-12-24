/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Find the Index of the First Occurrence in a String
 */

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        for (int i = 0; i < haystack.size(); i++) {
            if (haystack.substr(i, needle.size()) == needle) {
                return i;
            }
        }
        return -1;

    }
};
// @lc code=end

