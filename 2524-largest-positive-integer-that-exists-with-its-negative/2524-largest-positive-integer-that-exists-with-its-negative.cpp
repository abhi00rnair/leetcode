class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int n=nums.size();
        int ret=-1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(-nums[i]==nums[j]&& ret<abs(nums[j])){
                    ret=abs(nums[j]);
                }
            }
        }
        return ret;
    }
};