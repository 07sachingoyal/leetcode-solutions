int FirstOcc(vector<int>& nums,int n, int target){
    int ans = -1;
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(nums[mid]==target){
            ans = mid;
            end = mid-1;
        }
        else if(nums[mid]>target){
            end = mid-1;
        }
        else if(nums[mid]<target){
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
int LastOcc(vector<int>& nums,int n, int target){
    int ans = -1;
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(nums[mid]==target){
            ans = mid;
            start = mid+1;
        }
        else if(nums[mid]>target){
            end = mid-1;
        }
        else if(nums[mid]<target){
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        int ans1;
        ans1 = FirstOcc(nums,n,target);
        int ans2;
        ans2 = LastOcc(nums,n,target);
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
    }
};