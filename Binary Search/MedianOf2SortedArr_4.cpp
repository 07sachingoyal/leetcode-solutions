class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp;
        int i = 0, j = 0;
        int m = nums1.size();
        int n = nums2.size();
        while (i < m && j < n) {
            if (nums1[i] <= nums2[j]) {
                temp.push_back(nums1[i]);
                i++;
            } else {
                temp.push_back(nums2[j]);
                j++;
            }
        }

        while (i < m) {
            temp.push_back(nums1[i]);
            i++;
        }

        while (j < n) {
            temp.push_back(nums2[j]);
            j++;
        }
        int a = (m+n)/2;
        if((m+n)%2 != 0) return temp[a];
        else {
            float b = (float(temp[a-1])+float(temp[a]))/2;
            return b;
        }
    }
};