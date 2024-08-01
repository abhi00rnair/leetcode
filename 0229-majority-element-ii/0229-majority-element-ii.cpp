class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>hash;
        int n=nums.size();
        vector<int>ret;
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }
        int key=n/3;
        for(auto it:hash){
            if(it.second>key){
                ret.push_back(it.first);
            }
        }
        return ret;
    }
};