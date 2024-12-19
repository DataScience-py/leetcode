#
# @lc app=leetcode id=20 lang=python3
#
# [20] Valid Parentheses
#

# @lc code=start
class Solution:
    def isValid(self, s: str) -> bool:
        lists = []
        for i in s:
            if i == '(' or i == '[' or i == '{':
                lists.append(i)
            else:
                if len(lists) == 0:
                    return False
                if i == ')' and lists[-1] == '(':
                    lists.pop()
                elif i == ']' and lists[-1] == '[':
                    lists.pop()
                elif i == '}' and lists[-1] == '{':
                    lists.pop()
                else:
                    return False
        return len(lists) == 0
# @lc code=end

