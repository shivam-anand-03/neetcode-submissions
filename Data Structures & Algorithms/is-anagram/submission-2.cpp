class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        unordered_map<char, int> sMap;
        unordered_map<char, int> tMap;

        for (char sch : s)
        {
            sMap[sch]++;
        }

        for (char tch : t)
        {
            tMap[tch]++;
        }

        if (sMap == tMap)
            return true;

        return false;
    }
};