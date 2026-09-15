class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        for(int i = 0;i<nums.size();i++){
            int icnt = 0;
            for(int j = 0;j<nums.size();j++){
                if(nums[i] == nums[j]) icnt++;
            }
            if(icnt > 1) return true;
        }
        return false;
    }
};