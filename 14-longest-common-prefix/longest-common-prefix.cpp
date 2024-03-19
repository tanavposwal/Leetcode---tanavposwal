class Solution {
private:
    string common(string str1, string str2) {
        int i = 0;
        string c = "";

        while (i < str1.length() && i < str2.length()) {
            if (str1[i] == str2[i]) {
                c.push_back(str1[i]);
                i++;
            } else {
                break;
            }
        }

        return c;
    }

public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        for (string str : strs) {
            prefix = common(str, prefix);
        }
        return prefix;
    }
};