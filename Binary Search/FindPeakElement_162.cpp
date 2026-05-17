class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            bool greaterThanLeft  = (mid <= 0) || (nums[mid] > nums[mid - 1]);
            bool greaterThanRight = (mid >= nums.size() - 1) || (nums[mid] > nums[mid + 1]);

            if (greaterThanLeft && greaterThanRight) {
                return mid;
            } else if (!greaterThanLeft) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return -1;
    }
};