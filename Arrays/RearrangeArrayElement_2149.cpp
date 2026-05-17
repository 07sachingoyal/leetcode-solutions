class Solution {
public:
    vector<int> rearrangeArray(vector<int>& a) {
        int pos = 0;
        int neg = 1;
        vector <int> ans(a.size());
        for(int i = 0;i<a.size();i++){
            if (a[i]>0){
                ans[pos] = a[i];
                pos+=2;
            }
            else{
                ans[neg] = a[i];
                neg+=2;
            }
        }
        return ans;
    }
};