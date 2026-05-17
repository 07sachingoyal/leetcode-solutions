class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        long long sum = 0;
        long long maxsum = INT_MIN;
        for(int i = 0 ; i < n ; i++){
            sum += nums[i];
            if(sum>maxsum) maxsum = sum;
            if(sum < 0){
                sum = 0;
            }
        }
        return maxsum;
    }
};