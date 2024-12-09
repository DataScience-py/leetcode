#
# @lc app=leetcode id=3 lang=python3
#
# [3] Longest Substring Without Repeating Characters
#


# @lc code=start
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        dictionary = {}
        curr_length = 0
        max_length = 0
        for i in range(len(s)):
            if s[i] in dictionary:
                curr_length = max(curr_length, dictionary[s[i]])
            max_length = max(max_length, i - curr_length + 1)
            dictionary[s[i]] = i + 1
        return max_length


# @lc code=end
