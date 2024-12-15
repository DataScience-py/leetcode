/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        string s = to_string(x);
        int l = 0, r = s.size() - 1;
        while (l < r)
        {
            if (s[l] != s[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
};
// @lc code=end
