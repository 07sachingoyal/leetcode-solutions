class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int isunique = 1;
        for(int i=0 ; i<n ; i++){
            isunique = 1;
            for(int j=0 ; j<n ; j++){
                if(j==i) continue;
                if(nums[i]==nums[j]){
                    isunique =0;
                    break;
                }
            }
            if(isunique == 1) return nums[i];
        }
        return -1;
    }
};