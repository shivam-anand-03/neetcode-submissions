class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m = s1.size();
        int n = s2.size();

        if (m > n) return false;

        vector<int> s1Freq(26, 0);
        vector<int> s2Freq(26, 0);

        for (int i = 0; i < m; i++) {
            s1Freq[s1[i] - 'a']++;
            s2Freq[s2[i] - 'a']++;
        }

        if (s1Freq == s2Freq)
            return true;

        for (int j = m; j < n; j++) {
            s2Freq[s2[j] - 'a']++;       // add new char
            s2Freq[s2[j - m] - 'a']--;   // remove old char

            if (s1Freq == s2Freq)
                return true;
        }

        return false;
    }
};