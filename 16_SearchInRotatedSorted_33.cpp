int findpivot(vector<int>& nums, int s, int e){
    int mid = s+(e-s)/2;
    while(s<e){
        if(nums[mid]>=nums[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
}
int findk(vector<int>& nums, int s, int e, int k){
    int ans = -1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(nums[mid]==k){
            return mid;
        }
        else if(nums[mid]>k){
            e = mid-1;
        }
        else if(nums[mid]<k){
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0;
        int e = n-1;
        int k = target;
        int pivot = findpivot(nums, s, e);
        int bottom = pivot;
        int ans;
        if(nums[pivot]<=target && target<=nums[n-1]){
            ans = findk(nums, bottom, n-1, k);
        }
        else{
            ans = findk(nums,s, bottom - 1, k);
        }
        return ans;
    }
};