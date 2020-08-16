/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除排序数组中的重复项
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int pre = 0, cur = 0;
        while (cur < nums.size()) {
            if (nums[pre] != nums[cur])
            {
                nums[++pre] = nums[cur];
            }
            cur++;
        }
        return pre + 1;
    }
};
// @lc code=end

