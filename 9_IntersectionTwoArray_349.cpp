class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        int arr[1000];
        int index = 0;
        for(int i=0;i<m;i++){
            int issame = 0;
            for(int k=0;k<i;k++){
                if(nums1[i]==nums1[k]){
                    issame=1;
                }
            }
                if(issame==1) continue;
                for(int j=0;j<n;j++){
                    if(nums1[i]==nums2[j]){
                        arr[index]=nums1[i];
                        index++;
                        break;
                    }
                }
            }
        vector<int> ans;
        for(int i = 0; i < index; i++){
            ans.push_back(arr[i]);
        }
        return ans;
    }
};