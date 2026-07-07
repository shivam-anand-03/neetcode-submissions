class Solution {
   public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int maxLen = 0;

        for (int i = 0; i < n; i++) {
            int freq[26] = {0};
            int maxFreq = 0;

            for (int j = i; j < n; j++) {
                freq[s[j] - 'A']++;
                maxFreq = max(maxFreq, freq[s[j] - 'A']);
                int windowLen = j - i + 1;
                int replacements = windowLen - maxFreq;

                if (replacements <= k) {
                    maxLen = max(maxLen, windowLen);
                } else {
                    break;
                }
            }
        }
        return maxLen;
    }
};
