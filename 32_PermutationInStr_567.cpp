class Solution {
private:
    bool checkequal(int a[26], int b[26]) {
        for (int i = 0; i < 26; i++) {
            if (a[i] != b[i]) return false;
        }
        return true;
    }

public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) return false;

        int count1[26] = {0};
        for (char ch : s1) {
            count1[ch - 'a']++;
        }

        int count2[26] = {0};
        int windowSize = s1.length();

        // first window
        for (int i = 0; i < windowSize; i++) {
            count2[s2[i] - 'a']++;
        }

        if (checkequal(count1, count2)) return true;

        // sliding window
        for (int i = windowSize; i < s2.length(); i++) {
            // add new character
            count2[s2[i] - 'a']++;

            // remove old character
            count2[s2[i - windowSize] - 'a']--;

            if (checkequal(count1, count2)) return true;
        }

        return false;
    }
};