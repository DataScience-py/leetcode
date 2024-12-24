/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int max_sum = nums[0];
        int cur_sum = 0;
        for (int i = 0; i < nums.size(); i++){
            cur_sum = cur_sum + nums[i] > nums[i] ? cur_sum + nums[i] : nums[i];
            max_sum = max_sum > cur_sum ? max_sum : cur_sum;
        }
        return max_sum;
    }
};
// @lc code=end

