class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxcount = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]!=1){
                if(count>maxcount) maxcount = count;
                count = 0;
                continue;
            }
            count++;
        }
        if(count>maxcount) maxcount = count;
        return maxcount;
    }
};