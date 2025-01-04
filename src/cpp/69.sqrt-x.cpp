/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution
{
public:
    int mySqrt(int x){
        if (x < 0)
        {
            throw std::invalid_argument("Input must be a non-negative integer.");
        }

        if (x == 0 || x == 1)
        {
            return x;
        }

        int left = 0, right = x, result = 0;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            long long square = static_cast<long long>(mid) * mid;

            if (square == x)
            {
                return mid;
            }
            else if (square < x)
            {
                result = mid;
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        return result;
    }
};
// @lc code=end
