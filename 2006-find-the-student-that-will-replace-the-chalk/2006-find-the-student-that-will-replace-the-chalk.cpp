class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long totalSum = 0;
        for (int c : chalk) {
            totalSum += c;
        }
        k %= totalSum;
        for (int i = 0; i<chalk.size(); ++i) {
            if (k < chalk[i]) {
                return i;
            }
            k -= chalk[i];
        }

        return -1;
    }
};
