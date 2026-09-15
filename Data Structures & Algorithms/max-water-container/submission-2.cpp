class Solution {
public:
    int maxArea(vector<int>& arr) {
        int left = 0, right = arr.size() - 1;
        int area = INT_MIN;
        while(left < right){
            area = max(area,(right - left) * (min(arr[left], arr[right])));
            if(arr[left] < arr[right]){
                left++;
            }else right--;
        }
        return area;
    }
};
