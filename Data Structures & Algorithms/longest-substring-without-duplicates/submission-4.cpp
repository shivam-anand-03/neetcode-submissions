class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charSet;
        int left = 0;
        int maxLength = 0;

        for (int i = 0; i < s.size(); i++) {
            while (charSet.find(s[i]) != charSet.end()) {
                charSet.erase(s[left]);
                left++;
            }
            charSet.insert(s[i]);
            maxLength = max(maxLength, i - left + 1);
        }
        return maxLength;
    }
};
