#
# @lc app=leetcode id=859 lang=python3
#
# [859] Buddy Strings
#

# @lc code=start
class Solution:
    def buddyStrings(self, s: str, goal: str) -> bool:
        if len(s) != len(goal):
            return False
        if s == goal:
            return len(set(s)) < len(s)
        diff = []
        for i in range(len(s)):
            if s[i] != goal[i]:
                diff.append(i)
        if len(diff) != 2:
            return False
        return s[diff[0]] == goal[diff[1]] and s[diff[1]] == goal[diff[0]]
# @lc code=end

