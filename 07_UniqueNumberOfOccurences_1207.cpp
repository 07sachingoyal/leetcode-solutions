class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        vector<int> brr;

        for(int i=0; i<n; i++){
            int count = 1;
            bool issame = false;

            for(int k=0; k<i; k++){
                if(arr[i] == arr[k]){
                    issame = true;
                    break;
                }
            }
            if(issame) continue;

            for(int j=i+1; j<n; j++){
                if(arr[i] == arr[j]){
                    count++;
                }
            }
            brr.push_back(count);
        }

        for(int i=0; i<brr.size(); i++){
            for(int j=i+1; j<brr.size(); j++){
                if(brr[i] == brr[j]) return false;
            }
        }
        return true;
    }
};