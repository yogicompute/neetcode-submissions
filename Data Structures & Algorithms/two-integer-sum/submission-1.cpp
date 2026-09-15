class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int, int> mpp;
        for(int i = 0;i<arr.size();i++){
            int current = arr[i];
            int needMore = target - arr[i];
            if(mpp.find(needMore) != mpp.end()){
                return {mpp[needMore], i};
            }
            mpp[current] = i;
        }
        return {-1, -1};

        return {-1, -1};
    }
};
