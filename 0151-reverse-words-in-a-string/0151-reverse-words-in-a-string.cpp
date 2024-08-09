class Solution {
public:
    string reverseWords(string s) {
        string ret;
        int n = s.length();
        int i = n - 1;

        while (i >= 0) {
            while (i >= 0 && s[i] == ' ') {
                i--;
            }
            if (i < 0) break;
            int j = i;
            while (i >= 0 && s[i] != ' ') {
                i--;
            }
            if (!ret.empty()) {
                ret.push_back(' ');
            }
            ret.append(s.substr(i + 1, j - i));
        }
        return ret;
    }
};
