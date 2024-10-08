class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n = timeSeries.size();
        if (n == 0 || duration == 0) {
            return 0;
        }
        int ret= 0;
        int lastEnd = 0;

        for (int i = 0; i < n; i++) {
            int start = timeSeries[i];
            int end = start + duration;

            if (start < lastEnd) {
                ret+= end - lastEnd;
            } else {
                ret+= duration;
            }
            lastEnd = end;
        }

        return ret;
    }
};
