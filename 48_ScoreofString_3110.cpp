class Solution {
public:
    int scoreOfString(string s) {
        int score  = 0;
        for(int i = 0; i < s.length()-1; i++){
            if(int(s[i]-s[i+1])>=0){
                score += int(s[i]-s[i+1]);
            }
            else{
                score -= int(s[i]-s[i+1]);
            }
        }
        return score;
    }
};