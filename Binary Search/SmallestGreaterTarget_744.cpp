class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int s = 0;
        int e = letters.size() - 1;
        int mid = s + (e-s)/2;
        char ans = letters[0];
        while(s<=e){
            if(target < letters[mid]){
                ans = letters[mid];
                e = mid - 1;
            }
            else if(target >= letters[mid]){
                s = mid + 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }
};