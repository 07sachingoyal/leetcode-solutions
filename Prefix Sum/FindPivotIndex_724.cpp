class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();

        for (int k = 0; k < n; k++) {
            int lsum = 0, rsum = 0;

            for (int i = 0; i < n; i++) {
                if (i < k) lsum += nums[i];
                else if (i > k) rsum += nums[i];
            }

            if (lsum == rsum) return k;
        }
        return -1;
    }
};
