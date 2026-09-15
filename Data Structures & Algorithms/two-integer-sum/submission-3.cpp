class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;

        for(int i = 0;i<nums.size();i++){
            int curr = nums[i];
            int needMore = target - curr;

            if(mpp.count(needMore)) return {mpp[needMore], i};
            mpp[curr] = i;
        }

        return {-1, -1};
    }
};
