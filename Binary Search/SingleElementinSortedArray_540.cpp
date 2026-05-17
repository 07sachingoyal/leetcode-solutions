class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int s = 0;
        int e = nums.size()-1;
        int mid = s+(e-s)/2;
        while(s<e){
            if(nums[mid]==nums[mid-1]){
                if((mid-1)%2!=0) e = mid - 2;
                else s = mid + 1;
            }
            else if(nums[mid]==nums[mid+1]){
                if(mid%2!=0) e = mid - 1;
                else s = mid + 2;
            }
            else return nums[mid];
            mid = s+(e-s)/2;
        }
        return nums[s];
    }
};