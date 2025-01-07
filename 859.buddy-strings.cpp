/*
 * @lc app=leetcode id=859 lang=cpp
 *
 * [859] Buddy Strings
 */

// @lc code=start
class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size() != goal.size()) return false;
        if(s == goal) {
            vector<int> count(26, 0);
            for(auto c : s) {
                count[c - 'a']++;
                if(count[c - 'a'] > 1) return true;
            }
            return false;
        }
        vector<int> diff;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] != goal[i]) {
                diff.push_back(i);
            }
        }
        if(diff.size() != 2) return false;
        return s[diff[0]] == goal[diff[1]] && s[diff[1]] == goal[diff[0]];
    }
};
// @lc code=end

