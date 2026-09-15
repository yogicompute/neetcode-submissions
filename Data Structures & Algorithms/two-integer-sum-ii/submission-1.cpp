class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int left = 0, right = arr.size() - 1;

        while(left < right){
            int sum = arr[left] + arr[right];
            if(sum < target) left++;
            else if(sum > target) right--;
            else{
                return {left+1, right+1};
            }
        }
        return {-1, -1};
    }
};
