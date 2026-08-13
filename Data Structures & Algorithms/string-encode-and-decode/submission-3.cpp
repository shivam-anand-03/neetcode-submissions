class Solution {
   public:
    string encode(vector<string>& strs) {
        string response = "";

        for (string& s : strs) {
            response += to_string(s.size()) + "#" + s;
        }

        return response;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;

        while (i < s.size()) {
            int j = i;

            while (s[j] != '#') {
                j++;
            }

            int len = stoi(s.substr(i, j - i));

            j++;

            ans.push_back(s.substr(j, len));

            i = j + len;
        }

        return ans;
    }
};
