/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution
{
public:
    int romanToInt(string s)
    {
        int res = 0;
        unordered_map<char, int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        for (int i = 0; i < s.size(); i++)
        {
            if (i < s.size() - 1 && mp[s[i]] < mp[s[i + 1]])
            {
                res -= mp[s[i]];
            }
            else
            {
                res += mp[s[i]];
            }
        }
        return res;
    }
};
// @lc code=end
