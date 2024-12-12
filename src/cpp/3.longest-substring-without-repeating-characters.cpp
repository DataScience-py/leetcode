/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.size();
        int res = 0;
        unordered_map<char, int> m;
        for (int i = 0, j = 0; i < n; i++)
        {
            if (m.find(s[i]) != m.end())
            {
                j = max(j, m[s[i]] + 1);
            }
            res = max(res, i - j + 1);
            m[s[i]] = i;
        }
        return res;
    }
};
// @lc code=end
